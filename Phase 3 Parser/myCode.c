/*Bison output & Bison version  */
#define YYBISON 30705

/* Bison version */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

extern char yytext[];
extern int column;
extern int yylineno;

int yylex(void);
void yyerror(char *s);

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug*/
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token*/
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    If = 258,                      /* If  */
    Else = 259,                    /* Else  */
    While = 260,                   /* While  */
    Class = 261,                   /* Class  */
    Extends = 262,                 /* Extends  */
    Public = 263,                  /* Public  */
    Static = 264,                  /* Static  */
    Void = 265,                    /* Void  */
    Boolean = 266,                 /* Boolean  */
    Integer = 267,                 /* Integer  */
    String = 268,                  /* String  */
    True = 269,                    /* True  */
    False = 270,                   /* False  */
    This = 271,                    /* This  */
    New = 272,                     /* New  */
    Println = 273,                 /* Println  */
    Return = 274,                  /* Return  */
    ArrayLength = 275,             /* ArrayLength  */
    Main = 276,                    /* Main  */
    Id = 277,                      /* Id  */
    Number = 278,                  /* Number  */
    And = 279                      /* And  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define If 258
#define Else 259
#define While 260
#define Class 261
#define Extends 262
#define Public 263
#define Static 264
#define Void 265
#define Boolean 266
#define Integer 267
#define String 268
#define True 269
#define False 270
#define This 271
#define New 272
#define Println 273
#define Return 274
#define ArrayLength 275
#define Main 276
#define Id 277
#define Number 278
#define And 279


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_If = 3,                         /* If  */
  YYSYMBOL_Else = 4,                       /* Else  */
  YYSYMBOL_While = 5,                      /* While  */
  YYSYMBOL_Class = 6,                      /* Class  */
  YYSYMBOL_Extends = 7,                    /* Extends  */
  YYSYMBOL_Public = 8,                     /* Public  */
  YYSYMBOL_Static = 9,                     /* Static  */
  YYSYMBOL_Void = 10,                      /* Void  */
  YYSYMBOL_Boolean = 11,                   /* Boolean  */
  YYSYMBOL_Integer = 12,                   /* Integer  */
  YYSYMBOL_String = 13,                    /* String  */
  YYSYMBOL_True = 14,                      /* True  */
  YYSYMBOL_False = 15,                     /* False  */
  YYSYMBOL_This = 16,                      /* This  */
  YYSYMBOL_New = 17,                       /* New  */
  YYSYMBOL_Println = 18,                   /* Println  */
  YYSYMBOL_Return = 19,                    /* Return  */
  YYSYMBOL_ArrayLength = 20,               /* ArrayLength  */
  YYSYMBOL_Main = 21,                      /* Main  */
  YYSYMBOL_Id = 22,                        /* Id  */
  YYSYMBOL_Number = 23,                    /* Number  */
  YYSYMBOL_And = 24,                       /* And  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '['  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '.'  */
  YYSYMBOL_32_ = 32,                       /* '!'  */
  YYSYMBOL_33_ = 33,                       /* '<'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Goal = 41,                      /* Goal  */
  YYSYMBOL_MainClass = 42,                 /* MainClass  */
  YYSYMBOL_ClassDeclarationList = 43,      /* ClassDeclarationList  */
  YYSYMBOL_ClassDeclaration = 44,          /* ClassDeclaration  */
  YYSYMBOL_VarDeclarationList = 45,        /* VarDeclarationList  */
  YYSYMBOL_VarDeclaration = 46,            /* VarDeclaration  */
  YYSYMBOL_MethodDeclarationList = 47,     /* MethodDeclarationList  */
  YYSYMBOL_MethodDeclaration = 48,         /* MethodDeclaration  */
  YYSYMBOL_ParameterList = 49,             /* ParameterList  */
  YYSYMBOL_Type = 50,                      /* Type  */
  YYSYMBOL_StatementList = 51,             /* StatementList  */
  YYSYMBOL_Statement = 52,                 /* Statement  */
  YYSYMBOL_ExpressionList = 53,            /* ExpressionList  */
  YYSYMBOL_Expression = 54,                /* Expression  */
  YYSYMBOL_Identifier = 55                 /* Identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif


#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif


#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    

#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /*yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* maximum gap between one aligned stack & next*/
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1


# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED

# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM)*/
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM]*/
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,     2,     2,     2,     2,     2,
      34,    36,    30,    28,    39,    29,    31,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      33,    25,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    37,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    33,    33,    37,    41,    42,    46,    47,    48,    49,
      53,    54,    58,    62,    63,    67,    68,    72,    73,    74,
      78,    79,    80,    81,    85,    86,    90,    91,    92,    93,
      94,    95,    99,   100,   101,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   124,   125
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "If", "Else", "While",
  "Class", "Extends", "Public", "Static", "Void", "Boolean", "Integer",
  "String", "True", "False", "This", "New", "Println", "Return",
  "ArrayLength", "Main", "Id", "Number", "And", "'='", "'{'", "'['", "'+'",
  "'-'", "'*'", "'.'", "'!'", "'<'", "'('", "']'", "')'", "'}'", "';'",
  "','", "$accept", "Goal", "MainClass", "ClassDeclarationList",
  "ClassDeclaration", "VarDeclarationList", "VarDeclaration",
  "MethodDeclarationList", "MethodDeclaration", "ParameterList", "Type",
  "StatementList", "Statement", "ExpressionList", "Expression",
  "Identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT

static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    61,   123,    91,    43,    45,
      42,    46,    33,    60,    40,    93,    41,   125,    59,    44
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   137,     5,     6,   -19,   -14,    -8,   -85,   137,   -85,
       7,   -85,   137,   -85,     6,   134,   134,   134,   -21,    70,
      55,   134,    22,   134,    20,   -85,   -85,   -85,   -85,   183,
     -85,   134,   134,   245,    55,   255,   265,   -85,   -85,   197,
      29,   285,   137,   159,    26,    56,    32,   275,   134,   134,
     134,   134,   134,    86,   134,   137,   137,    28,   -85,    60,
      46,   107,   171,   -85,    47,   159,   -85,    40,    76,   137,
      55,   134,    49,   -85,   313,   295,    87,    87,   -12,   -85,
      75,    66,    99,   -85,   -85,    90,   134,   159,   137,    81,
     -85,    82,   -85,   -85,    10,   305,   -85,   -85,   134,   137,
      89,   209,   159,    92,    80,   -85,   -85,   -85,   -85,    88,
     184,   -85,   122,   -85,   101,   -85,   171,   -85,   134,   114,
     -85,   109,   137,   -85,   108,   121,   -17,   137,   171,   171,
      42,   171,   135,   -85,   127,   139,   134,   137,   134,   221,
     124,   233,   128,   132,   136,   -85,   -85,   -85
};


static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     0,     0,     0,    52,    25,    53,
       0,     1,     0,     2,     5,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     4,    44,    45,    47,     0,
      43,     0,     0,     0,    46,     0,     0,    26,    24,     0,
       0,     0,     0,    14,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,    21,    22,    14,    10,     0,    14,     0,
      23,     0,     0,    51,    35,     0,    37,    38,    39,    41,
       0,    36,    53,    28,    29,     0,     0,    14,     0,     0,
      11,     0,     7,    13,     0,     0,    49,    40,    34,     0,
       0,     0,    14,     0,     0,    20,     6,    12,    48,     0,
      32,    27,     0,    31,     0,     9,    19,    42,    34,     0,
       8,     0,     0,    33,     0,     0,    17,     0,    25,    19,
       0,    25,     0,    18,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,    16,     3,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   158,   -85,   -84,   -59,   -51,   -85,    50,
     -53,   -18,    -6,    57,     8,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,    13,    14,    65,    66,    67,    68,   121,
      69,    18,     9,   109,   110,    34
};


static const yytype_int16 yytable[] =
{
      10,    38,    19,   102,     1,    11,    90,    20,    21,    88,
      23,    24,    12,    19,    91,    15,    37,    93,    20,    53,
      16,    54,   129,    33,    35,    36,    17,    42,    45,    39,
      40,    41,    21,    22,    23,    21,   103,    23,    59,    46,
      47,    61,    70,    90,   131,    21,    43,    23,   107,    82,
      83,   114,    80,    71,    20,    20,    74,    75,    76,    77,
      78,    70,    81,   122,    70,    54,    84,    21,    94,    23,
      85,    86,    90,     4,    89,     5,   122,    92,   134,    95,
      21,    21,    23,    23,    62,    96,    70,   104,     6,     4,
      72,     5,     7,   111,   101,   -53,     8,   -53,    20,   -54,
      21,    70,    23,    99,     6,    21,    79,    23,     7,    98,
     132,   100,     8,   135,   116,    70,   105,    52,    53,   106,
      54,   126,    19,   112,   117,    19,   130,    70,    70,   115,
      70,   140,    21,    87,    23,   119,    20,     4,   120,     5,
       4,   124,     5,   127,   139,   125,   141,   128,    26,    27,
      28,    29,     6,   137,   136,     6,     7,    30,   138,     7,
       8,   143,     4,     8,     5,   145,    31,    62,    32,   146,
      63,    64,    25,   147,     4,   123,     5,     6,     0,   133,
       0,     7,    63,    64,     0,     8,     4,     0,     5,     6,
       0,     0,     0,     7,     0,    44,     0,     8,     0,     0,
       0,     6,     0,     0,     0,     7,     0,     0,    48,     8,
       0,    49,    50,    51,    52,    53,     0,    54,     0,     0,
       0,    48,     0,   118,    49,    50,    51,    52,    53,     0,
      54,     0,     0,    48,     0,    58,    49,    50,    51,    52,
      53,     0,    54,     0,     0,    48,     0,   113,    49,    50,
      51,    52,    53,     0,    54,     0,     0,    48,     0,   142,
      49,    50,    51,    52,    53,     0,    54,     0,     0,    48,
       0,   144,    49,    50,    51,    52,    53,     0,    54,    48,
       0,    55,    49,    50,    51,    52,    53,     0,    54,    48,
       0,    56,    49,    50,    51,    52,    53,     0,    54,    48,
       0,    57,    49,    50,    51,    52,    53,     0,    54,    48,
       0,    73,    49,    50,    51,    52,    53,     0,    54,    48,
      60,     0,    49,    50,    51,    52,    53,     0,    54,    48,
      97,     0,    49,    50,    51,    52,    53,     0,    54,     0,
     108,    50,    51,    52,    53,     0,    54
};

static const yytype_int16 yycheck[] =
{
       1,    19,     8,    87,     6,     0,    65,     8,    25,    62,
      27,    12,     6,    19,    65,    34,    37,    68,    19,    31,
      34,    33,    39,    15,    16,    17,    34,     7,    29,    21,
       8,    23,    25,    26,    27,    25,    87,    27,     9,    31,
      32,    42,    43,   102,   128,    25,    26,    27,    38,    55,
      56,   102,    53,    27,    55,    56,    48,    49,    50,    51,
      52,    62,    54,   116,    65,    33,    38,    25,    69,    27,
      10,    25,   131,     3,    27,     5,   129,    37,    36,    71,
      25,    25,    27,    27,     8,    36,    87,    88,    18,     3,
      34,     5,    22,    99,    86,    25,    26,    27,    99,    33,
      25,   102,    27,     4,    18,    25,    20,    27,    22,    34,
     128,    21,    26,   131,    34,   116,    35,    30,    31,    37,
      33,   122,   128,    34,    36,   131,   127,   128,   129,    37,
     131,   137,    25,    26,    27,    13,   137,     3,    37,     5,
       3,    27,     5,    35,   136,    36,   138,    26,    14,    15,
      16,    17,    18,    26,    19,    18,    22,    23,    19,    22,
      26,    37,     3,    26,     5,    37,    32,     8,    34,    37,
      11,    12,    14,    37,     3,   118,     5,    18,    -1,   129,
      -1,    22,    11,    12,    -1,    26,     3,    -1,     5,    18,
      -1,    -1,    -1,    22,    -1,    12,    -1,    26,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    24,    26,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    24,    -1,    39,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    24,    -1,    38,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    24,    -1,    38,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    24,    -1,    38,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    24,
      -1,    38,    27,    28,    29,    30,    31,    -1,    33,    24,
      -1,    36,    27,    28,    29,    30,    31,    -1,    33,    24,
      -1,    36,    27,    28,    29,    30,    31,    -1,    33,    24,
      -1,    36,    27,    28,    29,    30,    31,    -1,    33,    24,
      -1,    36,    27,    28,    29,    30,    31,    -1,    33,    24,
      35,    -1,    27,    28,    29,    30,    31,    -1,    33,    24,
      35,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      35,    28,    29,    30,    31,    -1,    33
};

  /* YYSTOS[STATE-NUM]*/
static const yytype_int8 yystos[] =
{
       0,     6,    41,    42,     3,     5,    18,    22,    26,    52,
      55,     0,     6,    43,    44,    34,    34,    34,    51,    52,
      55,    25,    26,    27,    55,    43,    14,    15,    16,    17,
      23,    32,    34,    54,    55,    54,    54,    37,    51,    54,
       8,    54,     7,    26,    12,    55,    54,    54,    24,    27,
      28,    29,    30,    31,    33,    36,    36,    36,    38,     9,
      35,    55,     8,    11,    12,    45,    46,    47,    48,    50,
      55,    27,    34,    36,    54,    54,    54,    54,    54,    20,
      55,    54,    52,    52,    38,    10,    25,    26,    50,    27,
      46,    47,    37,    47,    55,    54,    36,    35,    34,     4,
      21,    54,    45,    47,    55,    35,    37,    38,    35,    53,
      54,    52,    34,    38,    47,    37,    34,    36,    39,    13,
      37,    49,    50,    53,    27,    36,    55,    35,    26,    39,
      55,    45,    51,    49,    36,    51,    19,    26,    19,    54,
      52,    54,    38,    37,    38,    37,    37,    37
};

  /* YYR1[YYN]*/
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    43,    43,    44,    44,    44,    44,
      45,    45,    46,    47,    47,    48,    48,    49,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    55
};

  /* YYR2[YYN]*/
static const yytype_int8 yyr2[] =
{
       0,     2,     2,    17,     2,     0,     6,     5,     8,     7,
       1,     2,     3,     2,     0,    13,    12,     2,     4,     0,
       3,     1,     1,     1,     2,     0,     3,     7,     5,     5,
       4,     7,     1,     3,     0,     3,     3,     3,     3,     3,
       4,     3,     6,     1,     1,     1,     1,     1,     5,     4,
       2,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)
#define YYERRCODE YYUNDEF


/* It will Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}


static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).
*/

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else 
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


yybackup:
  /* Apply necessary processing in light of the current situation. If we need one and don't already have one, read a lookahead token..  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
  
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count the number of tokens that have changed after the mistake; after three, turn off the error status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;

yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;

yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 33 "parser.y"
                                            { printf("this is valid expression\n"); YYACCEPT; }
#line 1345 "y.tab.c"
    break;

  case 53: /* Identifier: Statement  */
#line 125 "parser.y"
                      {yyerror ("Not a valid expression\n"); YYABORT; }
#line 1351 "y.tab.c"
    break;


#line 1355 "y.tab.c"

      default: break;
    }

  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


yyerrlab:

  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;

yyerrorlab:
  
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


yyacceptlab:
  yyresult = 0;
  goto yyreturn;

yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow

yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 128 "parser.y"

void yyerror(char *s) {
   
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}
int yywrap(){return(1);}
int main(void) {
    yyparse();
    return 0;
}
