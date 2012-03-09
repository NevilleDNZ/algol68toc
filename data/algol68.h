/* Created: BP21500-05-15
 *          -- Sian Leitch <algol68@sleitch.nildram.co.uk>
 * Modified: 2012-02-02
 *	    -- Sian Mountbatten <poenikatu@fastmail.co.uk>
 */

// Algol 68 colour highlighting

user char Matchdelim_algol68 = 1;
user int algol68_tab_override = 3;

// Possible values for algol68_comment()
#define IN_COMMENT             0x100  // delimited by COMMENT
#define IN_BRIEF_COMMENT       0x101  // delimited by #
#define IN_TALLY_BRIEF_COMMENT 0x102  // delimited by CO

// Possible values of find_routine_info()
#define AR_OP                  1      // found operator
#define AR_PROC                2      // found procedure
#define STAR_LINE "^%%|%*"

// Various global names
user char auto_show_algol68_delimiters = 1;
user char algol68_auto_show_delim_chars[10] = "{[()]}";
user char compile_algol68_cmd[128] = "Run ca";
user char debug_algol68 = 0;	/* set to 1 for debugging */

volatile char op_chars[20] = "-+*/^%&~<>=?!";
char debug_buffer[20] = "Algol-68-debug";
int algol68_dbg;		/* debug buffer */

// Search patterns
char algol68_construct_pat[] = "|ALIEN|BEGIN|BY|CASE|CODE|CONTEXT|DO|ELIF"
		               "|ELSE|END|ESAC|EXIT|FI|FINISH|FOR|FROM|GO"
			       "|GOTO|IF|IN|KEEP|OD|OF|OUSE|OUT|PAR|PRIO"
			       "|PROGRAM|THEN|TO|USE|WHILE|";
char algol68_mode_pat[] = "|FLEX|HEAP|LOC|REF|STRUCT|UNION|OP|PROC"
			  "|BITS|BOOL|BYTES|CHANNEL|CHAR|COMPL|FILE"
			  "|FORMAT|INT|LONG|REAL|SHORT|STRING|VOID|";
char algol68_num_pat[] = "|FALSE|NIL|SKIP|TRUE|";
char algol68_operator_pat[] = "|ABS|AND|BIN|DIVAB|ENTIER|EQ|GE|GT|LE|LENG|LT"
			      "|LWB|MINUSAB|MOD|MODAB|NE|NOT|ODD|OR|OVER"
			      "|OVERAB|PLUSAB|PLUSTOREPR|ROUND|SHL|SHORTEN"
			      "|SHR|TIMESAB|UPB|";
char algol68_comment_pat[] = "|CO|COMMENT|";

// Colours for Algol 68

// Color_classes for Algol 68
color_class algol68_bold_tag blue;
color_class algol68_comment white;
color_class algol68_construct dark_red;
color_class algol68_identifier = color_class text;
color_class algol68_mode_colour blue;
color_class algol68_number red;
color_class algol68_operator magenta;
color_class algol68_punctuation green;
color_class algol68_string yellow;

int color_algol68_from_here(int safe);
int color_algol68_range(int from, int to);
