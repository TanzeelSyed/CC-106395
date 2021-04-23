#define  YY_INT_ALIGNED short int
#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 4
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif


/*standard C headers*/
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/*definitions of flex integer types*/

#ifndef FLEXINT_H
#define FLEXINT_H
#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#ifndef SIZE_MAX
#define SIZE_MAX               (~(size_t)0)
#endif

#endif 

#endif 

#define yyconst const

#if defined(__GNUC__) && __GNUC__ >= 3
#define yynoreturn __attribute__((__noreturn__))
#else
#define yynoreturn
#endif
#define YY_NULL 0
#define YY_SC_TO_UI(c) ((YY_CHAR) (c))
#define BEGIN (yy_start) = 1 + 2 *
#define YY_START (((yy_start) - 1) / 2)
#define YYSTATE YY_START
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)
#define YY_NEW_FILE yyrestart( yyin  )
#define YY_END_OF_BUFFER_CHAR 0

/*default input*/
#ifndef YY_BUF_SIZE
#ifdef __ia64__
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif
#endif
#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

extern int yyleng;

extern FILE *yyin, *yyout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2
    
    #define YY_LESS_LINENO(n)
    #define YY_LINENO_REWIND_TO(ptr)
#define yyless(n) \
	do \
		{ \
		\
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = (yy_hold_char); \
		YY_RESTORE_YY_MORE_OFFSET \
		(yy_c_buf_p) = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )
#define unput(c) yyunput( c, (yytext_ptr)  )

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;
	char *yy_buf_pos;

	/* Input buffer size in bytes, except space for EOB * characters. */
	int yy_buf_size;
	int yy_n_chars;
	int yy_is_our_buffer;

/*If we're going to use stdio for input, we'll need to use getc ()
* instead of fread(), to ensure that we avoid fetching input after a certain amount of time has passed.*/
	int yy_is_interactive;
	int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column; 

	/*try to fill the input*/
	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
#define YY_BUFFER_EOF_PENDING 2

	};
#endif
/* Input buffers are stacked on top of each other*/
static size_t yy_buffer_stack_top = 0;
static size_t yy_buffer_stack_max = 0; 
static YY_BUFFER_STATE * yy_buffer_stack = NULL; 

/* We include macros for accessing buffer states in case we decide to place them in a more general scanner state in the future.
* Returns either NULL or the top of the stack.*/
#define YY_CURRENT_BUFFER ( (yy_buffer_stack) \
                          ? (yy_buffer_stack)[(yy_buffer_stack_top)] \
                          : NULL)
#define YY_CURRENT_BUFFER_LVALUE (yy_buffer_stack)[(yy_buffer_stack_top)]

/* The character lost when yytext is created is stored in yy hold char. */
static char yy_hold_char;
static int yy_n_chars;	
int yyleng;

/* Indicates the current character in the buffer.*/
static char *yy_c_buf_p = NULL;
static int yy_init = 0;
static int yy_start = 0;	

static int yy_did_buffer_switch_on_eof;

void yyrestart ( FILE *input_file  );
void yy_switch_to_buffer ( YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer ( FILE *file, int size  );
void yy_delete_buffer ( YY_BUFFER_STATE b  );
void yy_flush_buffer ( YY_BUFFER_STATE b  );
void yypush_buffer_state ( YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state ( void );

static void yyensure_buffer_stack ( void );
static void yy_load_buffer_state ( void );
static void yy_init_buffer ( YY_BUFFER_STATE b, FILE *file  );
#define YY_FLUSH_BUFFER yy_flush_buffer( YY_CURRENT_BUFFER )

YY_BUFFER_STATE yy_scan_buffer ( char *base, yy_size_t size  );
YY_BUFFER_STATE yy_scan_string ( const char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes ( const char *bytes, int len  );

void *yyalloc ( yy_size_t  );
void *yyrealloc ( void *, yy_size_t  );
void yyfree ( void *  );

#define yy_new_buffer yy_create_buffer
#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer( yyin, YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}
#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer( yyin, YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}
#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)

typedef flex_uint8_t YY_CHAR;

FILE *yyin = NULL, *yyout = NULL;

typedef int yy_state_type;

extern int yylineno;
int yylineno = 1;

extern char *yytext;
#ifdef yytext_ptr
#undef yytext_ptr
#endif
#define yytext_ptr yytext

static yy_state_type yy_get_previous_state ( void );
static yy_state_type yy_try_NUL_trans ( yy_state_type current_state  );
static int yy_get_next_buffer ( void );
static void yynoreturn yy_fatal_error ( const char* msg  );

/* Sets up yytext after the current pattern has been matched and before the * corresponding operation.*/
#define YY_DO_BEFORE_ACTION \
	(yytext_ptr) = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	(yy_hold_char) = *yy_cp; \
	*yy_cp = '\0'; \
	(yy_c_buf_p) = yy_cp;
#define YY_NUM_RULES 43
#define YY_END_OF_BUFFER 44

/* While this struct is not used in this scanner, it is needed*/
struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static const flex_int16_t yy_accept[138] =
    {   0,
        0,    0,   44,   42,   40,   41,   27,   42,   30,   31,
       26,   24,   36,   25,   29,   42,   21,   37,   23,   28,
       20,   20,   32,   33,   20,   20,   20,   20,   20,   20,
       20,   20,   20,   20,   20,   20,   20,   20,   34,   35,
       22,    0,    0,   21,   20,   20,   20,   20,   20,   20,
       20,   20,    1,   20,   20,   20,   20,   20,   20,   20,
       20,   20,   20,   20,    0,    0,    0,   38,   20,   20,
       20,   20,   20,   20,   20,   10,   20,   20,   15,   20,
       20,   20,   20,   20,   20,   20,   39,   20,   20,   20,
       20,    2,   20,   20,   20,   19,   20,   20,   20,   14,

       12,    8,   20,   20,   20,   20,    4,   20,   13,   20,
       20,   20,   20,    3,   11,   20,   20,   20,   18,    6,
       17,    7,    0,    9,    5,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,   16,    0
    } ;

static const YY_CHAR yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    2,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    4,    1,    1,    1,    1,    5,    1,    6,
        7,    8,    9,   10,   11,   12,   13,   14,   14,   14,
       14,   14,   14,   14,   14,   14,   14,    1,   15,   16,
       17,    1,    1,    1,   18,   18,   18,   18,   18,   18,
       18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
       18,   18,   19,   18,   18,   18,   18,   18,   18,   18,
       20,   21,   22,    1,   23,    1,   24,   25,   26,   27,

       28,   29,   30,   31,   32,   18,   18,   33,   34,   35,
       36,   37,   18,   38,   39,   40,   41,   42,   43,   44,
       45,   18,   46,    1,   47,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static const YY_CHAR yy_meta[48] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    2,    1,    1,    1,    2,    2,    1,
        1,    1,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    1,    1
    } ;

static const flex_int16_t yy_base[141] =
    {   0,
        0,    0,  151,  152,  152,  152,  152,  145,  152,  152,
      152,  152,  152,  152,  152,   40,  135,  152,  152,  152,
        0,    9,  152,  152,  112,  114,   17,  122,   22,  117,
      120,  115,  101,  113,  100,   21,  103,  107,  152,  152,
      152,  129,  133,  121,    0,   96,   94,   96,  107,   91,
       89,   95,    0,   87,   91,   93,   81,   98,   82,   97,
       88,   78,   86,   85,  108,   47,  112,  152,   82,   73,
       79,   72,   82,   81,   69,    0,   77,   71,    0,   72,
       63,   63,   63,   73,   73,   66,   90,   62,   68,   67,
       55,    0,   58,   64,   51,    0,   58,   51,   56,    0,

        0,    0,   59,   56,   51,   60,    0,   56,    0,   51,
       55,   45,   53,    0,    0,   66,   42,   37,    0,    0,
        0,    0,   39,    0,    0,   33,   33,   55,   29,   27,
       32,   28,   22,   27,   23,  152,  152,   54,   68,   70
    } ;

static const flex_int16_t yy_def[141] =
    {   0,
      137,    1,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      138,  138,  137,  137,  138,  138,  138,  138,  138,  138,
      138,  138,  138,  138,  138,  138,  138,  138,  137,  137,
      137,  139,  140,  137,  138,  138,  138,  138,  138,  138,
      138,  138,  138,  138,  138,  138,  138,  138,  138,  138,
      138,  138,  138,  138,  139,  139,  140,  137,  138,  138,
      138,  138,  138,  138,  138,  138,  138,  138,  138,  138,
      138,  138,  138,  138,  138,  138,  139,  138,  138,  138,
      138,  138,  138,  138,  138,  138,  138,  138,  138,  138,

      138,  138,  138,  138,  138,  138,  138,  138,  138,  138,
      138,  138,  138,  138,  138,  138,  138,  138,  138,  138,
      138,  138,  137,  138,  138,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,    0,  137,  137,  137
    } ;

static const flex_int16_t yy_nxt[200] =
    {   0,
        4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
       14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
        4,   24,    4,   21,   25,   26,   21,   27,   28,   21,
       21,   29,   30,   31,   32,   21,   33,   34,   35,   36,
       21,   37,   38,   21,   21,   39,   40,   42,   46,   50,
       53,   61,   43,   47,   66,   45,   54,  136,   62,  135,
       51,  134,  133,  132,  131,  130,  129,   87,   65,   65,
       67,   67,  128,  127,  126,  125,  124,  123,  122,  121,
      120,  119,  118,  117,  116,  115,  114,  113,  112,  111,
      110,  109,  108,  107,  106,  105,  104,   66,  103,  102,

      101,  100,   99,   98,   97,   96,   95,   94,   93,   92,
       91,   90,   89,   88,   68,   66,   86,   85,   84,   83,
       82,   81,   80,   79,   78,   77,   76,   75,   74,   73,
       72,   71,   70,   69,   44,   68,   66,   64,   63,   60,
       59,   58,   57,   56,   55,   52,   49,   48,   44,   41,
      137,    3,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137

    } ;

static const flex_int16_t yy_chk[200] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,   16,   22,   27,
       29,   36,   16,   22,   66,  138,   29,  135,   36,  134,
       27,  133,  132,  131,  130,  129,  128,   66,  139,  139,
      140,  140,  127,  126,  123,  118,  117,  116,  113,  112,
      111,  110,  108,  106,  105,  104,  103,   99,   98,   97,
       95,   94,   93,   91,   90,   89,   88,   87,   86,   85,

       84,   83,   82,   81,   80,   78,   77,   75,   74,   73,
       72,   71,   70,   69,   67,   65,   64,   63,   62,   61,
       60,   59,   58,   57,   56,   55,   54,   52,   51,   50,
       49,   48,   47,   46,   44,   43,   42,   38,   37,   35,
       34,   33,   32,   31,   30,   28,   26,   25,   17,    8,
        3,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137,  137,
      137,  137,  137,  137,  137,  137,  137,  137,  137

    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;

extern int yy_flex_debug;
int yy_flex_debug = 0;

#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *yytext;
#line 1 "lexa.l"
#line 2 "lexa.l"
#include <stdio.h>
#include "y.tab.h"
#include <stdlib.h>

void count();
int yylineno;
#line 536 "lex.yy.c"
#line 11 "lexa.l"
        /* Basics */
#line 539 "lex.yy.c"

#define INITIAL 0

#ifndef YY_NO_UNISTD_H
/* Since "unistd.h" is non-ANSI, it has a special case.
 We put it this far down because we want the user's first segment to be searched first.
* There is an option for the consumer to circumvent it.
/
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

static int yy_init_globals ( void );

/*These are made visible to non-reentrant scanners for convenience. */
int yylex_destroy ( void );

int yyget_debug ( void );

void yyset_debug ( int debug_flag  );

YY_EXTRA_TYPE yyget_extra ( void );

void yyset_extra ( YY_EXTRA_TYPE user_defined  );

FILE *yyget_in ( void );

void yyset_in  ( FILE * _in_str  );

FILE *yyget_out ( void );

void yyset_out  ( FILE * _out_str  );

			int yyget_leng ( void );

char *yyget_text ( void );

int yyget_lineno ( void );

void yyset_lineno ( int _line_number  );
#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap ( void );
#else
extern int yywrap ( void );
#endif
#endif

#ifndef YY_NO_UNPUT
    
    static void yyunput ( int c, char *buf_ptr  );
    
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy ( char *, const char *, int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen ( const char * );
#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
static int yyinput ( void );
#else
static int input ( void );
#endif

#endif

/*There's a lot to slurp up with each read.*/
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

#ifndef ECHO
#define ECHO do { if (fwrite( yytext, (size_t) yyleng, 1, yyout )) {} } while (0)
#endif

/*Takes input and stores it in "buf," which is then returned in "result."*/
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) \
		{ \
		int c = '*'; \
		int n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR("Failed!input in flex scanner"); \
		result = n; \
		} \
	else \
		{ \
		errno=0; \
		while ( (result = (int) fread(buf, 1, (yy_size_t) max_size, yyin)) == 0 && ferror(yyin)) \
			{ \
			if( errno != EINTR) \
				{ \
				YY_FATAL_ERROR( "Failed!input in flex scanner" ); \
				break; \
				} \
			errno=0; \
			clearerr(yyin); \
			} \
		}\
\

#endif

/* No semicolon after return; proper use is "yyterminate();" - 
we don't want an extra ';' after the "return" 
because it will cause some compilers to complain about unreachable statements.*/
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/*fatal error*/
#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif


/* Default declaration of generated scanner*/
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (void);

#define YY_DECL int yylex (void)
#endif

/* Code executed at the beginning of each rule, after yytext and yyleng*/
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Code executed at the end of each rule. */
#ifndef YY_BREAK
#define YY_BREAK /*LINTED*/break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION
YY_DECL
{
	yy_state_type yy_current_state;
	char *yy_cp, *yy_bp;
	int yy_act;
    
	if ( !(yy_init) )
		{
		(yy_init) = 1;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! (yy_start) )
			(yy_start) = 1;	

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			yyensure_buffer_stack ();
			YY_CURRENT_BUFFER_LVALUE =
				yy_create_buffer( yyin, YY_BUF_SIZE );
		}

		yy_load_buffer_state(  );
		}

	{
#line 17 "lexa.l"

#line 758 "lex.yy.c"

	while ( /*CONSTCOND*/1 )
		{
		yy_cp = (yy_c_buf_p);

		
		*yy_cp = (yy_hold_char);

		
		yy_bp = yy_cp;

		yy_current_state = (yy_start);
yy_match:
		do
			{
			YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)] ;
			if ( yy_accept[yy_current_state] )
				{
				(yy_last_accepting_state) = yy_current_state;
				(yy_last_accepting_cpos) = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 138 )
					yy_c = yy_meta[yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 152 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;

do_action:

		switch ( yy_act )
	{ /*starting with action switch */
			case 0: /* must back up */
			*yy_cp = (yy_hold_char);
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			goto yy_find_action;

case 1:
YY_RULE_SETUP
#line 18 "lexa.l"
{ count(); return If; }
	YY_BREAK
case 2:
YY_RULE_SETUP
#line 19 "lexa.l"
{ count(); return Else; }
	YY_BREAK
case 3:
YY_RULE_SETUP
#line 20 "lexa.l"
{ count(); return While; }
	YY_BREAK
case 4:
YY_RULE_SETUP
#line 21 "lexa.l"
{ count(); return Class; }
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 22 "lexa.l"
{ count(); return Extends; }
	YY_BREAK
case 6:
YY_RULE_SETUP
#line 23 "lexa.l"
{ count(); return Public; }
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 24 "lexa.l"
{ count(); return Static; }
	YY_BREAK
case 8:
YY_RULE_SETUP
#line 25 "lexa.l"
{ count(); return Void; }
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 26 "lexa.l"
{ count(); return Boolean; }
	YY_BREAK
case 10:
YY_RULE_SETUP
#line 27 "lexa.l"
{ count(); return Integer; }
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 28 "lexa.l"
{ count(); return String; }
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 29 "lexa.l"
{ count(); return True; }
	YY_BREAK
case 13:
YY_RULE_SETUP
#line 30 "lexa.l"
{ count(); return False; }
	YY_BREAK
case 14:
YY_RULE_SETUP
#line 31 "lexa.l"
{ count(); return This; }
	YY_BREAK
case 15:
YY_RULE_SETUP
#line 32 "lexa.l"
{ count(); return New; }
	YY_BREAK
case 16:
YY_RULE_SETUP
#line 33 "lexa.l"
{ count(); return Println; }
	YY_BREAK
case 17:
YY_RULE_SETUP
#line 34 "lexa.l"
{ count(); return Return; }
	YY_BREAK
case 18:
YY_RULE_SETUP
#line 35 "lexa.l"
{ count(); return ArrayLength; }
	YY_BREAK
case 19:
YY_RULE_SETUP
#line 36 "lexa.l"
{ count(); return Main; }
	YY_BREAK
case 20:
YY_RULE_SETUP
#line 38 "lexa.l"
{ count(); return Id; }
	YY_BREAK
case 21:
YY_RULE_SETUP
#line 39 "lexa.l"
{ count(); return Number; }
	YY_BREAK
case 22:
YY_RULE_SETUP
#line 42 "lexa.l"
{ count(); return And; }
	YY_BREAK
case 23:
YY_RULE_SETUP
#line 43 "lexa.l"
{ count(); return '<'; }
	YY_BREAK
case 24:
YY_RULE_SETUP
#line 44 "lexa.l"
{ count(); return '+'; }
	YY_BREAK
case 25:
YY_RULE_SETUP
#line 45 "lexa.l"
{ count(); return '-'; }
	YY_BREAK
case 26:
YY_RULE_SETUP
#line 46 "lexa.l"
{ count(); return '*'; }
	YY_BREAK
case 27:
YY_RULE_SETUP
#line 47 "lexa.l"
{ count(); return '!'; }
	YY_BREAK
case 28:
YY_RULE_SETUP
#line 48 "lexa.l"
{ count(); return '='; }
	YY_BREAK
case 29:
YY_RULE_SETUP
#line 49 "lexa.l"
{ count(); return '.'; }
	YY_BREAK
case 30:
YY_RULE_SETUP
#line 51 "lexa.l"
{ count(); return '('; }
	YY_BREAK
case 31:
YY_RULE_SETUP
#line 52 "lexa.l"
{ count(); return ')'; }
	YY_BREAK
case 32:
YY_RULE_SETUP
#line 53 "lexa.l"
{ count(); return '['; }
	YY_BREAK
case 33:
YY_RULE_SETUP
#line 54 "lexa.l"
{ count(); return ']'; }
	YY_BREAK
case 34:
YY_RULE_SETUP
#line 55 "lexa.l"
{ count(); return '{'; }
	YY_BREAK
case 35:
YY_RULE_SETUP
#line 56 "lexa.l"
{ count(); return '}'; }
	YY_BREAK
case 36:
YY_RULE_SETUP
#line 57 "lexa.l"
{ count(); return ','; }
	YY_BREAK
case 37:
YY_RULE_SETUP
#line 58 "lexa.l"
{ count(); return ';'; }
	YY_BREAK
case 38:
/* rule 38 can match eol */
YY_RULE_SETUP
#line 60 "lexa.l"
{ /* Comment */yylineno++; }
	YY_BREAK
case 39:
/* rule 39 can match eol */
YY_RULE_SETUP
#line 61 "lexa.l"
{ /* Comment */yylineno++; }
	YY_BREAK
case 40:
YY_RULE_SETUP
#line 62 "lexa.l"
{ count(); }
	YY_BREAK
case 41:
/* rule 41 can match eol */
YY_RULE_SETUP
#line 63 "lexa.l"
{ count(); yylineno++; }
	YY_BREAK
case 42:
YY_RULE_SETUP
#line 64 "lexa.l"
{ yyerror("Unknown character"); }
	YY_BREAK
case 43:
YY_RULE_SETUP
#line 66 "lexa.l"
ECHO;
	YY_BREAK
#line 1034 "lex.yy.c"
case YY_STATE_EOF(INITIAL):
	yyterminate();

	case YY_END_OF_BUFFER:
		{
		/* Amount of text matched not including the EOB char. */
		int yy_amount_of_matched_text = (int) (yy_cp - (yytext_ptr)) - 1;

		/* Undo the effects of YY_DO_BEFORE_ACTION. */
		*yy_cp = (yy_hold_char);
		YY_RESTORE_YY_MORE_OFFSET

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* A new file or input source is being scanned. 
			It's likely that this occurred because the user simply called yylex after pointing yyin at a new source ().
			 If this is the case, we must ensure * continuity between YY CURRENT BUFFER and our globals. 
			 Since * this is the first behaviour that will fit with the new input source, this is the best place to do so.
			 */
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = yyin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}

	/* Notice that we're looking for yy c buf p "=" at the location * of the first EOB in the buffer, 
	since yy c buf p would have already been incremented past the NUL character (since all states move to the end-of-buffer state on EOB).*/
		if ( (yy_c_buf_p) <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			{ 
			yy_state_type yy_next_state;

			(yy_c_buf_p) = (yytext_ptr) + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state(  );

		/* we're ready to make the NUL * transition. We couldn't have * yy get previous state() do it for us 
		because it doesn't know how to deal with the probability of jamming*/


			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = (yytext_ptr) + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				yy_cp = ++(yy_c_buf_p);
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = (yy_c_buf_p);
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer(  ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				(yy_did_buffer_switch_on_eof) = 0;

				if ( yywrap(  ) )
					{
					/* Note: Since we took care to set up * yytext in * yy get next buffer(), 
					we can now set up * yy c buf p so that if any absolute * hoser (like flex itself) tries to * call the scanner 
					after we return the * YY NULL, it'll still function - another * YY NULL will be returned. */
					(yy_c_buf_p) = (yytext_ptr) + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				(yy_c_buf_p) =
					(yytext_ptr) + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				(yy_c_buf_p) =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)];

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR("fatal flex scanner internal error-no action found" );
	}
		}
	}
}
static int yy_get_next_buffer (void)
{
    	char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	char *source = (yytext_ptr);
	int number_to_move, i;
	int ret_val;

	if ( (yy_c_buf_p) > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( (yy_c_buf_p) - (yytext_ptr) - YY_MORE_ADJ == 1 )
			{
			/* We matched a single character, the EOB, so
			 * treat this as a final EOF.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* We matched some text prior to the EOB, first
			 * process it.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Try to read more data. */

	/* First move last chars to start of buffer. */
	number_to_move = (int) ((yy_c_buf_p) - (yytext_ptr) - 1);

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )
	
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars) = 0;

	else
		{
			int num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{
			YY_BUFFER_STATE b = YY_CURRENT_BUFFER_LVALUE;

			int yy_c_buf_p_offset =
				(int) ((yy_c_buf_p) - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Include room in for 2 EOB chars. */
					yyrealloc( (void *) b->yy_ch_buf,
							 (yy_size_t) (b->yy_buf_size + 2)  );
				}
			else
				/* Can't grow it, we don't own it. */
				b->yy_ch_buf = NULL;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			(yy_c_buf_p) = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Read in more data. */
		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			(yy_n_chars), num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	if ( (yy_n_chars) == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart( yyin  );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	if (((yy_n_chars) + number_to_move) > YY_CURRENT_BUFFER_LVALUE->yy_buf_size) {
		/* Extend the array by 50%, plus the number we really need. */
		int new_size = (yy_n_chars) + number_to_move + ((yy_n_chars) >> 1);
		YY_CURRENT_BUFFER_LVALUE->yy_ch_buf = (char *) yyrealloc(
			(void *) YY_CURRENT_BUFFER_LVALUE->yy_ch_buf, (yy_size_t) new_size  );
		if ( ! YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			YY_FATAL_ERROR( "out of dynamic memory in yy_get_next_buffer()" );
		/* "- 2" to take care of EOB's */
		YY_CURRENT_BUFFER_LVALUE->yy_buf_size = (int) (new_size - 2);
	}

	(yy_n_chars) += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] = YY_END_OF_BUFFER_CHAR;

	(yytext_ptr) = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}

/* yy_get_previous_state - get the state just before the EOB char was reached */

    static yy_state_type yy_get_previous_state (void)
{
	yy_state_type yy_current_state;
	char *yy_cp;
    
	yy_current_state = (yy_start);

	for ( yy_cp = (yytext_ptr) + YY_MORE_ADJ; yy_cp < (yy_c_buf_p); ++yy_cp )
		{
		YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			(yy_last_accepting_state) = yy_current_state;
			(yy_last_accepting_cpos) = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 138 )
				yy_c = yy_meta[yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
		}

	return yy_current_state;
}

/* yy_try_NUL_trans - try to make a transition on the NUL character
 * synopsis * next state = yy try NUL trans( current state ); 
 *yy try NUL trans( current state ); *yy try NUL trans( current state ); *yy try NUL trans( current state );
  *yy try NUL trans( current state ); *yy try NUL trans( current state ); *yy try NUL
 */
    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
{
	int yy_is_jam;
    	char *yy_cp = (yy_c_buf_p);

	YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		(yy_last_accepting_state) = yy_current_state;
		(yy_last_accepting_cpos) = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 138 )
			yy_c = yy_meta[yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
	yy_is_jam = (yy_current_state == 137);

		return yy_is_jam ? 0 : yy_current_state;
}

#ifndef YY_NO_UNPUT

    static void yyunput (int c, char * yy_bp )
{
	char *yy_cp;
    
    yy_cp = (yy_c_buf_p);

	/* undo effects of setting up yytext */
	*yy_cp = (yy_hold_char);

	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
		{ /* need to shift things up to make room */
		/* +2 for EOB chars. */
		int number_to_move = (yy_n_chars) + 2;
		char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
		char *source =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];

		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars =
			(yy_n_chars) = (int) YY_CURRENT_BUFFER_LVALUE->yy_buf_size;

		if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;

	(yytext_ptr) = yy_bp;
	(yy_hold_char) = *yy_cp;
	(yy_c_buf_p) = yy_cp;
}

#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (void)
#else
    static int input  (void)
#endif

{
	int c;
    
	*(yy_c_buf_p) = (yy_hold_char);

	if ( *(yy_c_buf_p) == YY_END_OF_BUFFER_CHAR )
		{
	
		if ( (yy_c_buf_p) < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			/* This was really a NUL. */
			*(yy_c_buf_p) = '\0';

		else
			{ /* need more input */
			int offset = (int) ((yy_c_buf_p) - (yytext_ptr));
			++(yy_c_buf_p);

			switch ( yy_get_next_buffer(  ) )
				{
				case EOB_ACT_LAST_MATCH:
					/* This occurs because yy g n b() * notices that we've accumulated a * token and indicates that we should try matching the token before continuing.
					 However, there is no matching to consider for input(). 
					 * As a result, change EOB ACT LAST MATCH * to EOB ACT END OF FILE. /

					/* Reset buffer status. */
					yyrestart( yyin );

					/*FALLTHROUGH*/

				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap(  ) )
						return 0;

					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					(yy_c_buf_p) = (yytext_ptr) + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) (yy_c_buf_p);	/* cast for 8-bit char's */
	*(yy_c_buf_p) = '\0';	/* preserve yytext */
	(yy_hold_char) = *++(yy_c_buf_p);

	return c;
}
#endif	/* ifndef YY_NO_INPUT */

/** Immediately switch to a different input stream.
 * @param input_file A readable stream.
 * 
 * @note This function does not reset the start condition to @c INITIAL .
 */
    void yyrestart  (FILE * input_file )
{
    
	if ( ! YY_CURRENT_BUFFER ){
        yyensure_buffer_stack ();
		YY_CURRENT_BUFFER_LVALUE =
            yy_create_buffer( yyin, YY_BUF_SIZE );
	}

	yy_init_buffer( YY_CURRENT_BUFFER, input_file );
	yy_load_buffer_state(  );
}

/** Switch to a different input buffer.
 * @param new_buffer The new input buffer.
 * 
 */
    void yy_switch_to_buffer  (YY_BUFFER_STATE  new_buffer )
{
    
	/*This entire function body should be able to be replaced.
	 * with
	 *		
	 *		yypush_buffer_state(new_buffer);
	        yypop_buffer_state();
     */
	yyensure_buffer_stack ();
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	yy_load_buffer_state(  );
	(yy_did_buffer_switch_on_eof) = 1;
}

static void yy_load_buffer_state  (void)
{
    	(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	(yytext_ptr) = (yy_c_buf_p) = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	yyin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	(yy_hold_char) = *(yy_c_buf_p);
}

/**
 * @param file
 * @param size @c YY_BUF_SIZE.
 * 
 * @return the allocated buffer state.
 */
    YY_BUFFER_STATE yy_create_buffer  (FILE * file, int  size )
{
	YY_BUFFER_STATE b;
    
	b = (YY_BUFFER_STATE) yyalloc( sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf has to be 2 characters longer than the size given because
	 * we need to put in 2 end-of-buffer characters.
	 */
	b->yy_ch_buf = (char *) yyalloc( (yy_size_t) (b->yy_buf_size + 2)  );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer( b, file );

	return b;
}

/** Destroy the buffer.
 * @param b a buffer created with yy_create_buffer()
 * 
 */
    void yy_delete_buffer (YY_BUFFER_STATE  b )
{
    
	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER ) /* Not sure if we should pop here. */
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yyfree( (void *) b->yy_ch_buf  );

	yyfree( (void *) b  );
}

/* This function initialises or reinitializes a buffer. 
This function can be called several times on the same buffer, such as during a yyrestart() or at the end of the buffer.
 */
    static void yy_init_buffer  (YY_BUFFER_STATE  b, FILE * file )

{
	int oerrno = errno;
    
	yy_flush_buffer( b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

    /* If b is the current buffer, yy init buffer was * most likely_ called from yyrestart() or yy get next buffer. 
	We don't want to reset the lineno or column in that situation.
     */
    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;
    
	errno = oerrno;
}

/** Discard all buffered characters. On the next scan, YY_INPUT will be called.
 * @param b the buffer state to be flushed, usually @c YY_CURRENT_BUFFER.
 * 
 */
    void yy_flush_buffer (YY_BUFFER_STATE  b )
{
    	if ( ! b )
		return;

	b->yy_n_chars = 0;

	/* End-of-buffer characters are often needed.
	 The first results in a move to the buffer's end. In that condition, the second triggers a * snarl.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		yy_load_buffer_state(  );
}

/*The new state is pushed onto the stack.
  The existing state becomes the new state. If required, this function will assign the stack *.
 *  @param new_buffer The new state.
 *  
 */
void yypush_buffer_state (YY_BUFFER_STATE new_buffer )
{
    	if (new_buffer == NULL)
		return;

	yyensure_buffer_stack();

	/* This block is copied from yy_switch_to_buffer. */
	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	/* Only push if top exists. Otherwise, replace top. */
	if (YY_CURRENT_BUFFER)
		(yy_buffer_stack_top)++;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	/* copied from yy_switch_to_buffer. */
	yy_load_buffer_state(  );
	(yy_did_buffer_switch_on_eof) = 1;
}

/*If the top of the stack is present, it is removed and deleted.*/
void yypop_buffer_state (void)
{
    	if (!YY_CURRENT_BUFFER)
		return;

	yy_delete_buffer(YY_CURRENT_BUFFER );
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if ((yy_buffer_stack_top) > 0)
		--(yy_buffer_stack_top);

	if (YY_CURRENT_BUFFER) {
		yy_load_buffer_state(  );
		(yy_did_buffer_switch_on_eof) = 1;
	}
}
static void yyensure_buffer_stack (void)
{
	yy_size_t num_to_alloc;
    
	if (!(yy_buffer_stack)) {

		/*/* Since we don't know if this * scanner would even require a stack, the first allocation is only for two components.
		 We use 2 instead of 1 in order to prevent an immediate realloc on the next call.
         */
      num_to_alloc = 1;
		(yy_buffer_stack) = (struct yy_buffer_state**)yyalloc
								(num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		memset((yy_buffer_stack), 0, num_to_alloc * sizeof(struct yy_buffer_state*));

		(yy_buffer_stack_max) = num_to_alloc;
		(yy_buffer_stack_top) = 0;
		return;
	}

	if ((yy_buffer_stack_top) >= ((yy_buffer_stack_max)) - 1){

		/* Increase the buffer to prepare for a possible push. */
		yy_size_t grow_size = 8 /* arbitrary grow size */;

		num_to_alloc = (yy_buffer_stack_max) + grow_size;
		(yy_buffer_stack) = (struct yy_buffer_state**)yyrealloc
								((yy_buffer_stack),
								num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		/* zero only the new slots.*/
		memset((yy_buffer_stack) + (yy_buffer_stack_max), 0, grow_size * sizeof(struct yy_buffer_state*));
		(yy_buffer_stack_max) = num_to_alloc;
	}
}

/** Set the input buffer state to search directly from a character buffer that the user specifies.
 * @param base the character buffer
 * @param size the size in bytes of the character buffer
 * 
 * @return the newly allocated buffer state object.
 */
YY_BUFFER_STATE yy_scan_buffer  (char * base, yy_size_t  size )
{
	YY_BUFFER_STATE b;
    
	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		/* They forgot to leave room for the EOB's. */
		return NULL;

	b = (YY_BUFFER_STATE) yyalloc( sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_buffer()" );

	b->yy_buf_size = (int) (size - 2);	/* "- 2" to take care of EOB's */
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = NULL;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer( b  );

	return b;
}

/** To scan a string, set the input buffer state to scan. yylex() will be called again after that.
 * scan from a @e copy of @a str.
 * @param yystr a NUL-terminated string to scan
 * 
 * @return the newly allocated buffer state object.
 * @note If you want to scan bytes that may contain NUL values, then use
 *       yy_scan_bytes() instead.
 */
YY_BUFFER_STATE yy_scan_string (const char * yystr )
{
    
	return yy_scan_bytes( yystr, (int) strlen(yystr) );
}

/*Set the input buffer state to scan the bytes you've specified. yylex() will be called again after that.
 * scan from a @e copy of @a bytes.
 * @param yybytes the byte buffer to scan
 * @param _yybytes_len the number of bytes in the buffer pointed to by @a bytes.
 * 
 * @return the newly allocated buffer state object.
 */
YY_BUFFER_STATE yy_scan_bytes  (const char * yybytes, int  _yybytes_len )
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;
    
	/* Get memory with space for trailing EOBs. */
	n = (yy_size_t) (_yybytes_len + 2);
	buf = (char *) yyalloc( n  );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_bytes()" );

	for ( i = 0; i < _yybytes_len; ++i )
		buf[i] = yybytes[i];

	buf[_yybytes_len] = buf[_yybytes_len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer( buf, n );
	if ( ! b )
		YY_FATAL_ERROR( "Unfortunately!we found bad buffer in yy_scan_bytes()" );

	b->yy_is_our_buffer = 1;

	return b;
}

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

static void yynoreturn yy_fatal_error (const char* msg )
{
			fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
}


#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		yytext[yyleng] = (yy_hold_char); \
		(yy_c_buf_p) = yytext + yyless_macro_arg; \
		(yy_hold_char) = *(yy_c_buf_p); \
		*(yy_c_buf_p) = '\0'; \
		yyleng = yyless_macro_arg; \
		} \
	while ( 0 )


int yyget_lineno  (void)
{
    
    return yylineno;
}

/** Get the input stream.
 * 
 */
FILE *yyget_in  (void)
{
        return yyin;
}

/** Get the output stream.
 * 
 */
FILE *yyget_out  (void)
{
        return yyout;
}

/** length of the current token.
 * 
 */
int yyget_leng  (void)
{
        return yyleng;
}

/** Get the current token.
 * 
 */

char *yyget_text  (void)
{
        return yytext;
}

/** Set the current line number.
 * @param _line_number line number
 * 
 */
void yyset_lineno (int  _line_number )
{
    
    yylineno = _line_number;
}


@param _in_str
 
@see yy_switch_to_buffer

void yyset_in (FILE *  _in_str )
{
        yyin = _in_str ;
}

void yyset_out (FILE *  _out_str )
{
        yyout = _out_str ;
}

int yyget_debug  (void)
{
        return yy_flex_debug;
}

void yyset_debug (int  _bdebug )
{
        yy_flex_debug = _bdebug ;
}

static int yy_init_globals (void)
{
    (yy_buffer_stack) = NULL;
    (yy_buffer_stack_top) = 0;
    (yy_buffer_stack_max) = 0;
    (yy_c_buf_p) = NULL;
    (yy_init) = 0;
    (yy_start) = 0;

#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = NULL;
    yyout = NULL;
#endif


    return 0;
}

/* yylex_destroy is for both reentrant and non-reentrant scanners. */
int yylex_destroy  (void)
{
    
    /* Pop the buffer stack, destroying each element. */
	while(YY_CURRENT_BUFFER){
		yy_delete_buffer( YY_CURRENT_BUFFER  );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		yypop_buffer_state();
	}

	/* Destroy the stack itself. */
	yyfree((yy_buffer_stack) );
	(yy_buffer_stack) = NULL;

    /* This is essential in a non-reentrant scanner to ensure that initialization occurs the next time.*/
    yy_init_globals( );

    return 0;
}

#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, const char * s2, int n )
{
		
	int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (const char * s )
{
	int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

void *yyalloc (yy_size_t  size )
{
			return malloc(size);
}

void *yyrealloc  (void * ptr, yy_size_t  size )
{
	return realloc(ptr, size);
}

void yyfree (void * ptr )
{
			free( (char *) ptr );	
}

#define YYTABLES_NAME "yytables"

#line 66 "lexa.l"


int column = 0;

void count() {
    int i;

    for(i = 0; yytext[i] != '\0'; i++)
        if(yytext[i] == '\n')
            column = 0;
        else if(yytext[i] == '\t')
            column += 8 - (column % 8);
        else
            column++;
}


