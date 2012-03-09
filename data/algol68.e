/* Created: A long time ago
 *          -- Sian Leitch <algol68@sleitch.nildram.co.uk>
 * Updated: 2012-02-01
 *          -- Sian Mountbatten <poenikatu@fastmail.co.uk>
 */
/*  This file has Algol 68 mode */

#include "eel.h"
#include "algol68.h"
#include "colcode.h"
#include "proc.h"
#include "c.h"

/* No automatic indentation in this first version.
 * Restricted to lexical highlighting only.
 */

/* Notes:-
 * 1. find_algol68_proc
 *    This should search for "PROC" and then search forward for an
 *    identifier or "(". If the latter, skip-forward-level and repeat
 *    until an identifier is found. This will skip identifiers
 *    within structures in the mode of the PROC.
 */

keytable algol68_tab;

insert_algol68_construct(char *first, char *second, char *third, char *fourth)
{
	int orig = point;

	stuff(first);  insert('\n');
	stuff(second); insert('\n');
	stuff(third);  insert('\n');
	stuff(fourth); insert('\n'); 
	point = orig+strlen(first);
}

command insert_algol68_if() on algol68_tab[NUMSHIFT(FKEY(11))]
{
	insert_algol68_construct("IF","THEN","ELSE","FI");
	stuff("  ");
}

command insert_algol68_case() on algol68_tab[NUMCTRL(FKEY(11))]
{
	insert_algol68_construct("CASE","IN","OUT","ESAC");
	insert(' ');
}

command insert_algol68_do() on algol68_tab[NUMALT(FKEY(11))]
{
	insert_algol68_construct("FOR","WHILE","DO","OD");
	insert(' ');
}

command insert_algol68_doskip() on algol68_tab[NUMSHIFT(FKEY(12))]
{
	insert_algol68_construct("FOR","WHILE","DO SKIP OD","");
	insert(' ');
}

command color_algol68() on algol68_tab[NUMCTRL(FKEY(12))]
{
	fix_region();
	set_character_color(point, mark, color_class default);
	point = color_algol68_range(point, mark);
	highlight_off();
}

command debug_from_here()
{
	point = color_algol68_from_here(point);
}

debug_note(int cmd, char *fmt, char *str, int num, char ch)
{
	char *orig_buffer = bufname;

	if (debug_algol68) {
		bufname = bufnum_to_name(algol68_dbg);

		switch (cmd) {
		case 1:
			bprintf(fmt, str);/* char* */
			break;
		case 2:
			bprintf(fmt, num);/* int */
			break;
		case 3:
			bprintf(fmt, ch); /* char  */
			break;
		case 4:
			bprintf(fmt, num, str); /* int char* */
			break;
		case 5:
			bprintf(fmt, str, num); /* char* int */
			break;
		default:
			bprintf("Wrong index for debug_note%c\n", '.');
			break;
		}
		bufname = orig_buffer;
	}
} /* debug_note */

suffix_a68()
{
	algol68_mode();
	compile_buffer_cmd = compile_algol68_cmd;
}

suffix_w68()
{
	algol68_mode();
	compile_buffer_cmd = compile_algol68_cmd;
}

suffix_w()
{
	algol68_mode();
	compile_buffer_cmd = compile_algol68_cmd;
}	

color_algol68_from_here(safe)
{
	int cmt_start, cmt_finish, in_cmt = 0;
	char cmt_delim[10];

	safe = safe;
	point = 0;							/* start of buffer */
	while (point < safe) {
		if(re_search(RE_FORWARD, "#|%{|COMMENT|CO")) {
			grab(matchstart, matchend, cmt_delim);
			if (!strcmp(cmt_delim, "{"))
				strcpy(cmt_delim,"%{");

			cmt_start = matchstart;
			in_cmt = 1 - in_cmt;

			if (re_search(RE_FORWARD, cmt_delim)) {
				cmt_finish = matchend;
				in_cmt = 1 - in_cmt;
			}
		} else
			point = safe;
	}
	cmt_finish = cmt_finish;
	if (in_cmt)
		return cmt_start;
	else
		return give_begin_line();
}

color_algol68_range(from, to) /*  colour just this range */
{                             /*  last coloured region may be > `to' */
	char ch, s[10];

	s[1]='\0';

	if (from >= to)
		return to;

	algol68_init_colour(from, to);

	save_var case_fold = 0;

	point = from;  to = to;
	
	while (point < to) {
		switch (ch = curchar()) {    /*  check the next char */
			case '"':
				point = algol68_string(point, to);
				break;
			case '$':
				point = algol68_format(point, to);
				break;
			case '#':
				point = algol68_comment(point, to);
				break;
			case ':':
				point = algol68_operator(point, to);
				break;
			case ' ':
			case '\t':
			case '\n':
			case '\f':
				break;
			default:
				if (isupper(ch)) {
					point = algol68_bold_tag(point, to);
					break;
				}
				if (islower(ch)) {
					point = algol68_identifier(point, to);
					break;
				}
				if (isdigit(ch)) {
					point = algol68_number(point, to);
					break;
				}
				if (index(op_chars, (int)ch)) {
					point = algol68_operator(point, to);
					break;
				} else {
					point = point;
					set_character_color(point, point+1,
										color_class algol68_punctuation);
					break;
				}
		}
		s[0]=curchar();
		point++;
		if (point == 0) {
			break;
		}
	}
	return point;
}

algol68_string(int from, int to)
{ /* from = pos of quote
   * to = limit of colouring */
	int res;
	save_var point;
	to = to;
	if (character(from+1) != -1) {
		point=from+1;
		res=re_search(1, "\u{22}");
		/* Search for the next quote */
		set_character_color(from,res ? matchend : to,
							color_class algol68_string);
		return matchend-1;
	} else {
		set_character_color(from,to,color_class algol68_string);
		return from;
	}
}

algol68_format(from, to)
{
	int pos = from;
	save_var point = from+1;
	to = to;
	set_character_color(pos, re_search(1, "%$") ? matchend : to,
					   color_class algol68_string);
	return matchend;
}

algol68_comment(int from, int to)
{ /* from = pos of delimiter
   * to = limit of colouring */
	save_var point;
	to = to;
	/* Search for the closing # */
	point = from+1;
	set_character_color(from, re_search(1, "#") ? matchend : to,
						color_class algol68_comment);
	return matchend;
}

algol68_operator(from, to)
{
	char ch = character(from), str[32];

	point = from;  to = to;
	switch (ch) {
		case '=':
			re_search(RE_FORWARD, "[-+*/%^%%&~<>=%?!]+");
			set_character_color(matchstart, matchend,
								color_class algol68_operator);
			break;
		case ':':
			re_search(RE_FORWARD, "[:/=]+");
			grab(matchstart, matchend, str);
			switch (matchend - matchstart) {
				case 1: /*  : by itself */
					set_character_color(matchstart, matchend,
										color_class algol68_punctuation);
					break;
				case 2:
					if (!strcmp(str, ":="))
						set_character_color(matchstart, matchend,
											color_class algol68_punctuation);
					else
						set_character_color(matchstart, matchend,
											color_class algol68_operator);
					break;
				default:
					set_character_color(matchstart, matchend,
										color_class algol68_operator);
			}
			break;
		default:
			re_search(RE_FORWARD, "[-+*/%^%%&~<>=%?!]+");
			set_character_color(matchstart, matchend,
								color_class algol68_operator);
	}
	grab(from, matchend, str);
	return matchend - 1;
}

algol68_bold_tag(from, to)
{ /*  from = first upper-case character */
	char str[200], *pos, ss[20];
	int ms, me;

	save_var point, matchstart, matchend, case_fold=0;
	point = from;  to = to;
	re_search(1, "[A-Z][A-Z0-9]*"); /*  Find the extent of the bold tag */
	ms = matchstart;  me = matchend;
	
	/*  Now get the tag in `str' surrounded by | | */
	str[0]='|';
	grab(matchstart, matchend, str+1);
	strcat(str,"|");

	/*  Now identify the tag */
	if (strstr(algol68_construct_pat, str)) {
		set_character_color(matchstart, matchend,
				    color_class algol68_construct);
		return matchend-1;
	}

	if (strstr(algol68_mode_pat, str)) {
		set_character_color(matchstart, matchend,
				    color_class algol68_mode_colour);
		return matchend-1;
	}

	if (strstr(algol68_num_pat, str)) {
		set_character_color(matchstart, matchend,
				    color_class algol68_number);
		return matchend-1;
	}

	if (strstr(algol68_operator_pat, str)) {
		set_character_color(matchstart, matchend,
				    color_class algol68_operator);
		return matchend-1;
	}

	if (pos=strstr(algol68_comment_pat, str)) {
		int x = pos - algol68_comment_pat;
		if (x==3) { /*  COMMENT */
			set_character_color(ms, me,
					    color_class algol68_construct);
			point = me;
			if (search(1, "COMMENT")) {
				x = matchend-1;
				set_character_color(me+1, matchstart-1,
						    color_class algol68_comment);
				set_character_color(matchstart, matchend,
						    color_class algol68_construct);
			} else {
				x = to;
				set_character_color(me+1, to,
						    color_class algol68_comment);
			}
			return x;
		} /*  x==4 */

		if (x==0) { /*  CO */
			set_character_color(ms, me,
					    color_class algol68_construct);
			point = me;
			do {
				search(1, "CO");
				grab(matchstart-1,
				     matchend==to ? matchend : matchend+1, ss);
				if (matchend==to)
					strcat(ss,"\n");
			} while (!fpatmatch(ss, "[^A-Z+]CO[^A-Z]",0,0));

			if (me<to) {
				set_character_color(me+1, matchstart-1,
						    color_class algol68_comment);
				set_character_color(matchstart, matchend,
						    color_class algol68_construct);
			}
			return matchend;
		}
	}
	set_character_color(ms, me, color_class algol68_mode_colour);
	return me-1;
}

algol68_identifier(from, to)
{
	char str[512];

	point = from;  to = to;
	re_search(RE_FORWARD, "[a-z][a-z0-9_ \t\f\n]*");
	grab(matchstart, matchend, str);
	set_character_color(matchstart, matchend,
			    color_class algol68_identifier);
	return matchend-1;
}

algol68_number(from, to)
{
	int ms = from;
	char radix = character(from), numstr[100];

	point = from;
	if (point < to) {
		if (character(point + 1) == 'r') {
			if (to - point >= 2) {	/* Bits denotation */
				point += 2;			/* Position after the 'r' */

				switch (radix) {
					case '2':
						re_search(RE_FORWARD, "[01 ]+");
						break;
					case '4':
						re_search(RE_FORWARD, "[0-3 ]+");
						break;
					case '8':
						re_search(RE_FORWARD, "[0-7 ]+");
						break;
					default:
						matchend = ms+1;
				}
				set_character_color(ms, matchend,
						    color_class algol68_number);
			}
		} else if (to - point >= 3) {			/* hex? */
			grab(point, point + 3, numstr);
			if (!strcmp(numstr,"16r")) { /* hex bits denotation */
				point += 3;			/* Position at start of no. */
				re_search(RE_FORWARD, "[0-9a-f ]+");
				set_character_color(ms, matchend,
						    color_class algol68_number);
			} else {
				if (curchar()=='.') {
					ms = point++;
					re_search(RE_FORWARD, "[0-9 ]+(e[-+]?[ 0-9]+)?");
				} else
					re_search(RE_FORWARD,
						  "[0-9][0-9 ]*(<.>[0-9 ]+)?(e[-+]?[ 0-9]+)?");
				set_character_color(matchstart, matchend,
						    color_class algol68_number);
			}
		} else {
			re_search(RE_FORWARD, "[0-9][0-9 ]*");
			set_character_color(matchstart, matchend,
					    color_class algol68_number);
		}
	} /* point < to */
	return matchend-1;
}

algol68_init_colour(from, to)
{
	if (from < to)
		set_character_color(from, to,
				    color_class algol68_identifier);
}

command algol68_mode()
{
	if (debug_algol68)
		algol68_dbg = create(debug_buffer);
	algol68_tab[']'] = Matchdelim ? (short) show_matching_delimiter : 0;
	algol68_tab[')'] = Matchdelim ? (short) show_matching_delimiter : 0;
	major_mode = strsave("Algol68");
	mode_keys = algol68_tab;
	strcpy(comment_begin, "#");
	strcpy(comment_pattern, "#[.|\n]*#");
	strcpy(comment_end, "#");
	strcpy(comment_start, "#");
	recolor_range = color_algol68_range; /* set up colouring rules */
	recolor_from_here = color_algol68_from_here;  /* find start */
	if (want_code_coloring)
		when_setting_want_code_coloring();
	if (auto_show_algol68_delimiters)
		auto_show_matching_characters = algol68_auto_show_delim_chars;
	if (algol68_tab_override > 0)
		tab_size = algol68_tab_override;
	try_calling("algol68-mode-hook");
	drop_all_colored_regions();
	make_mode();
}
