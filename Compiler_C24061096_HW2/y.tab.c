/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "compiler_hw2.y" /* yacc.c:339  */

    #include "common.h" //Extern variables that communicate with lex
	#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>    

	// #define YYDEBUG 1
    // int yydebug = 1;

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;

    void yyerror (char const *s)
    {
        printf("error:%d: %s\n", yylineno, s);
    }

    /* Symbol table function - you can add new function if needed. */
    static void create_symbol();
    static void insert_symbol(char* name,char* types, int type_mode);
    int lookup_symbol(char *id, int flag, int check);
    void dump_symbol();
	static void assign_symbol(int id, double data);
	
	int is_array = 0;
	int address_num = 0;
	int var_num = 0;
	int scope_flag = 0;
	int print_mode = 0;
	char string_value[10];
	char bool_value[10];
	int array_mode = 0;
	int for_flag = 0;

struct data{
	int index;	//0,1,2,3
	char type[10];	//int, float,
	char name[10];	//x,y,z
	int address;
	int lineno;
	char element[10];
	int type_mode;	
	
	//content
    	int int_value;
    	double dou_value;
	char str_value[10];
	char bool_val[6];

	int assign_bit;
	int scope;
	int be_dumped;
	}symbol_table[100];


#line 124 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    INT = 259,
    FLOAT = 260,
    BOOL = 261,
    STRING = 262,
    VOID = 263,
    AND = 264,
    OR = 265,
    NOT = 266,
    LPAREN = 267,
    RPAREN = 268,
    LBRACK = 269,
    RBRACK = 270,
    LBRACE = 271,
    RBRACE = 272,
    ADD = 273,
    SUB = 274,
    MUL = 275,
    DIV = 276,
    REMAIN = 277,
    INC = 278,
    DEC = 279,
    ASSIGN = 280,
    ADD_ASSIGN = 281,
    SUB_ASSIGN = 282,
    MUL_ASSIGN = 283,
    QUO_ASSIGN = 284,
    REM_ASSIGN = 285,
    PRINT = 286,
    PRINTLN = 287,
    NEWLINE = 288,
    LAND = 289,
    LOR = 290,
    IF = 291,
    ELSE = 292,
    FOR = 293,
    EQL = 294,
    NEQ = 295,
    LSS = 296,
    LEQ = 297,
    GTR = 298,
    GEQ = 299,
    SEMICOLON = 300,
    COMMA = 301,
    INT_LIT = 302,
    FLOAT_LIT = 303,
    STRING_LIT = 304,
    IDENT = 305,
    BOOL_LIT = 306
  };
#endif
/* Tokens.  */
#define VAR 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define STRING 262
#define VOID 263
#define AND 264
#define OR 265
#define NOT 266
#define LPAREN 267
#define RPAREN 268
#define LBRACK 269
#define RBRACK 270
#define LBRACE 271
#define RBRACE 272
#define ADD 273
#define SUB 274
#define MUL 275
#define DIV 276
#define REMAIN 277
#define INC 278
#define DEC 279
#define ASSIGN 280
#define ADD_ASSIGN 281
#define SUB_ASSIGN 282
#define MUL_ASSIGN 283
#define QUO_ASSIGN 284
#define REM_ASSIGN 285
#define PRINT 286
#define PRINTLN 287
#define NEWLINE 288
#define LAND 289
#define LOR 290
#define IF 291
#define ELSE 292
#define FOR 293
#define EQL 294
#define NEQ 295
#define LSS 296
#define LEQ 297
#define GTR 298
#define GEQ 299
#define SEMICOLON 300
#define COMMA 301
#define INT_LIT 302
#define FLOAT_LIT 303
#define STRING_LIT 304
#define IDENT 305
#define BOOL_LIT 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 65 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    float f_val;
    char *s_val;
    /* ... */

#line 273 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   112,   113,   117,   118,   119,   120,   121,
     122,   123,   127,   171,   205,   205,   205,   209,   209,   209,
     212,   218,   219,   220,   223,   224,   226,   227,   228,   229,
     232,   233,   234,   235,   236,   237,   239,   240,   241,   242,
     245,   246,   247,   248,   251,   252,   253,   255,   258,   259,
     307,   308,   309,   310,   313,   327,   328,   329,   332,   333,
     336,   339,   347,   354,   355,   357,   358,   362,   363,   364,
     365,   368
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "INT", "FLOAT", "BOOL", "STRING",
  "VOID", "AND", "OR", "NOT", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "ADD", "SUB", "MUL", "DIV", "REMAIN", "INC", "DEC",
  "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "QUO_ASSIGN",
  "REM_ASSIGN", "PRINT", "PRINTLN", "NEWLINE", "LAND", "LOR", "IF", "ELSE",
  "FOR", "EQL", "NEQ", "LSS", "LEQ", "GTR", "GEQ", "SEMICOLON", "COMMA",
  "INT_LIT", "FLOAT_LIT", "STRING_LIT", "IDENT", "BOOL_LIT", "$accept",
  "Program", "StatementList", "Statement", "DeclarationStmt", "BLOCK",
  "$@1", "$@2", "FBLOCK", "$@3", "$@4", "SimpleStmt", "AssignmentStmt",
  "Expression", "UnaryExpr", "PrimaryExpr", "IndexExpr", "Operand",
  "Literal", "ConversionExpr", "IfStmt", "Forstmt", "Forclause",
  "PrintStmt", "IncDecStmt", "Type", "TypeName", "ArrayType", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -37,   -44,   -44,   -44,   -44,    72,    72,   -44,    72,
      72,     5,    13,   -44,    72,    72,   -44,   -44,   -44,   -44,
     -44,    26,     0,   -44,    -4,     1,     4,   -44,   236,   -44,
      25,   -44,   -44,   -44,   -44,     8,    11,    12,   -44,    34,
     -44,   -44,    16,   -44,   148,     0,   -44,   -44,    72,    72,
     197,     7,   182,    42,   -44,   -44,   -44,   -44,   -44,    72,
      72,    72,    72,    72,   -44,   -44,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,   -44,   -44,   -44,
      72,    48,    16,     0,    74,   111,    22,    72,   -44,   -44,
     -44,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   156,   121,    72,   -44,
      65,   -44,   -44,    -1,   208,     0,   -44,   -44,   249,   -44,
     -44,   -44,    72,     0,   -44,    67,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    67,    68,    70,    69,     0,     0,    14,     0,
       0,     0,     0,    11,     0,     0,    50,    51,    52,    49,
      53,     0,     2,     4,     0,     0,     0,    23,    21,    30,
      40,    46,    44,    48,    45,     0,     0,     0,    22,     0,
      65,    66,     0,    43,     0,     0,    41,    42,     0,     0,
       0,     0,    21,     0,     1,     3,     5,     7,     6,     0,
       0,     0,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     8,
       0,    13,     0,    15,     0,     0,    55,     0,    17,    58,
      59,    31,    32,    33,    34,    35,    24,    25,    26,    27,
      28,    29,    36,    37,    39,    38,     0,     0,     0,    71,
       0,    61,    62,     0,     0,     0,    47,    54,    12,    16,
      56,    57,     0,    18,    60,     0,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -43,   -12,   -44,   -38,   -44,   -44,    32,   -44,
     -44,   -15,   -44,    -6,    18,   -44,   -44,   -44,   -44,   -44,
     -25,   -44,   -44,   -44,   -44,    -2,   -44,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,    45,   110,    89,   115,
     125,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    53,    37,    38,    39,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    44,    83,     1,     2,     3,     4,     5,    50,    52,
      55,     6,    86,    42,     7,     8,     8,    48,     9,    10,
       2,     3,     4,     5,    43,    49,    54,    46,    47,    56,
       7,    11,    12,    13,    57,    14,    14,    58,    15,    76,
      81,    77,    84,    85,    78,    79,    80,    16,    17,    18,
      19,    20,    87,    91,    92,    93,    94,    95,    88,   113,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    55,   123,   108,   107,   120,     2,     3,     4,     5,
     109,   114,   119,     6,   126,    90,     7,   111,   121,     0,
       9,    10,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,   124,     0,     0,
       0,    55,     0,    72,    73,    74,     0,    75,     0,    16,
      17,    18,    19,    20,   112,     0,     0,     0,     0,    59,
      60,    61,    62,    63,   117,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
      72,    73,    74,     0,    75,     0,     0,     0,     0,     0,
      72,    73,    74,    82,    75,     0,    59,    60,    61,    62,
      63,   116,     0,     0,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
       0,    75,     0,     0,     0,    72,    73,    74,    88,    75,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     8,     0,    59,    60,    61,    62,    63,
       0,    72,    73,    74,     0,    75,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    72,    73,    74,     0,
      75,     0,     0,     0,     0,     0,     0,    72,    73,    74,
       0,    75,     0,   122,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    61,
      62,    63,     0,     0,     0,    72,    73,    74,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,     0,    75
};

static const yytype_int8 yycheck[] =
{
      15,     7,    45,     3,     4,     5,     6,     7,    14,    15,
      22,    11,    50,    50,    14,    16,    16,    12,    18,    19,
       4,     5,     6,     7,     6,    12,     0,     9,    10,    33,
      14,    31,    32,    33,    33,    36,    36,    33,    38,    14,
      42,    33,    48,    49,    33,    33,    12,    47,    48,    49,
      50,    51,    45,    59,    60,    61,    62,    63,    16,    37,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    83,   115,    25,    80,   113,     4,     5,     6,     7,
      82,    87,    17,    11,    17,    53,    14,    13,   113,    -1,
      18,    19,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,   123,    -1,    39,    40,    41,    -1,    43,    -1,    47,
      48,    49,    50,    51,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    15,    43,    -1,    18,    19,    20,    21,
      22,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    39,    40,    41,    16,    43,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    16,    -1,    18,    19,    20,    21,    22,
      -1,    39,    40,    41,    -1,    43,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    -1,    45,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    11,    14,    16,    18,
      19,    31,    32,    33,    36,    38,    47,    48,    49,    50,
      51,    53,    54,    55,    56,    57,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    75,    76,    77,
      78,    79,    50,    66,    65,    58,    66,    66,    12,    12,
      65,    63,    65,    74,     0,    55,    33,    33,    33,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    39,    40,    41,    43,    14,    33,    33,    33,
      12,    77,    15,    54,    65,    65,    57,    45,    16,    60,
      60,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    25,    77,
      59,    13,    13,    37,    65,    61,    15,    13,    65,    17,
      57,    72,    45,    54,    63,    62,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    58,    59,    57,    61,    62,    60,
      54,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    67,    68,    69,    69,
      70,    70,    70,    70,    71,    72,    72,    72,    73,    73,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     5,     3,     0,     0,     5,     0,     0,     5,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     4,     3,     5,     5,     3,     3,
       5,     4,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 113 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 117 "compiler_hw2.y" /* yacc.c:1646  */
    { ;}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 127 "compiler_hw2.y" /* yacc.c:1646  */
    {
		int temp = lookup_symbol((yyvsp[-3].s_val), scope_flag, 1);
		if(temp == -1){
			//insert_symbol($2, $3); 
			if( (yyvsp[-2].i_val) == 1){ 					
				insert_symbol((yyvsp[-3].s_val), "int32", (yyvsp[-2].i_val));
				assign_symbol(1, (yyvsp[0].f_val));
				//dump_symbol();
			}
			else if( (yyvsp[-2].i_val) == 2){
				insert_symbol((yyvsp[-3].s_val), "float32", (yyvsp[-2].i_val)); 
			   	assign_symbol(1, (yyvsp[0].f_val)); 
				//dump_symbol();
			}
			else if ((yyvsp[-2].i_val) == 3){
					insert_symbol((yyvsp[-3].s_val), "string", (yyvsp[-2].i_val));
					int temp = lookup_symbol((yyvsp[-3].s_val), scope_flag, 1);
					strcpy(symbol_table[temp].str_value, string_value); 
					//printf("%s\n", symbol_table[temp].str_value );
			}

			else if ((yyvsp[-2].i_val) == 4){
					insert_symbol((yyvsp[-3].s_val), "bool", (yyvsp[-2].i_val)); 	
					int temp = lookup_symbol((yyvsp[-3].s_val), scope_flag, 1);
					strcpy( symbol_table[temp].bool_val, bool_value); 
					//printf("%s\n", symbol_table[temp].bool_val );		
			}
			else if( (yyvsp[-2].i_val) == 1){ 					
				insert_symbol((yyvsp[-3].s_val), "array", (yyvsp[-2].i_val));
				assign_symbol(1, (yyvsp[0].f_val));
				//dump_symbol();
			}
			else if( (yyvsp[-2].i_val) == 1){ 					
				insert_symbol((yyvsp[-3].s_val), "array", (yyvsp[-2].i_val));
				assign_symbol(1, (yyvsp[0].f_val));
				//dump_symbol();
			}
			
		}
		else{
			printf("error:%d: %s redeclared in this block. previous declaration at line %d\n",
				yylineno, (yyvsp[-3].s_val), symbol_table[temp].lineno);		
		}
	}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 171 "compiler_hw2.y" /* yacc.c:1646  */
    {
		int temp = lookup_symbol((yyvsp[-1].s_val), scope_flag, 1);
		if(temp == -1){
				//int 
				if( (yyvsp[0].i_val) == 1){ 					
					insert_symbol((yyvsp[-1].s_val), "int32", (yyvsp[0].i_val)); 
				}
				else if( (yyvsp[0].i_val) == 2){
					insert_symbol((yyvsp[-1].s_val), "float32", (yyvsp[0].i_val)); 
				}
				else if ((yyvsp[0].i_val) == 3){
					insert_symbol((yyvsp[-1].s_val), "string", (yyvsp[0].i_val));
				}
				else if ((yyvsp[0].i_val) == 4){
					insert_symbol((yyvsp[-1].s_val), "bool", (yyvsp[0].i_val));
				}
				else if( (yyvsp[0].i_val) == 5){
					insert_symbol((yyvsp[-1].s_val), "array", (yyvsp[0].i_val)); 
				}
				else if( (yyvsp[0].i_val) == 6){
					insert_symbol((yyvsp[-1].s_val), "array", (yyvsp[0].i_val)); 
				}

			}
		
		else{
			
			printf("error:%d: %s redeclared in this block. previous declaration at line %d\n",
				yylineno, (yyvsp[-1].s_val), symbol_table[temp].lineno);
		}
		}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 205 "compiler_hw2.y" /* yacc.c:1646  */
    {scope_flag++ ;}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 205 "compiler_hw2.y" /* yacc.c:1646  */
    { }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 205 "compiler_hw2.y" /* yacc.c:1646  */
    { dump_symbol(); scope_flag-- ;}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 209 "compiler_hw2.y" /* yacc.c:1646  */
    {scope_flag++ ; for_flag = 1; for_flag =1; }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 209 "compiler_hw2.y" /* yacc.c:1646  */
    { }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "compiler_hw2.y" /* yacc.c:1646  */
    { dump_symbol(); scope_flag-- ; for_flag = 0;}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 218 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 219 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 223 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("ASSIGN\n"); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 224 "compiler_hw2.y" /* yacc.c:1646  */
    { if((yyvsp[-2].f_val) >6 && (yyvsp[0].f_val) ==1){printf("error:%d: cannot assign to int32\n", yylineno);} 
							printf("ADD_ASSIGN\n"); }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 226 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("SUB_ASSIGN\n"); }
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("MUL_ASSIGN\n"); }
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("QUO_ASSIGN\n"); }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 229 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("REM_ASSIGN\n"); }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 232 "compiler_hw2.y" /* yacc.c:1646  */
    {;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 233 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("ADD\n"); (yyval.f_val) = (yyvsp[-2].f_val) + (yyvsp[0].f_val); }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 234 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("SUB\n"); (yyval.f_val) = (yyvsp[-2].f_val) - (yyvsp[0].f_val); }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 235 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("MUL\n"); (yyval.f_val) = (yyvsp[-2].f_val) * (yyvsp[0].f_val); }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 236 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("QUO\n"); /*$$ = $1 / $3;*/ }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 237 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("REM\n"); /*$$ = (int)$1 % (int)$3;*/ }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 239 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("EQL\n"); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 240 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("NEQ\n"); }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 241 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("GTR\n"); }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 242 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("LSS\n"); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 245 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[0].f_val); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 246 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("POS\n"); (yyval.f_val) = (float)(yyvsp[0].f_val); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 247 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("NEG\n"); (yyval.f_val) = (yyvsp[0].f_val) * (-1); }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 248 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("NOT\n");  }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 251 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[0].f_val); }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 252 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[0].f_val); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 253 "compiler_hw2.y" /* yacc.c:1646  */
    {}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[-3].f_val); }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 258 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[0].f_val);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 259 "compiler_hw2.y" /* yacc.c:1646  */
    {//printf("enter ident"); 
				int temp = lookup_symbol((yyvsp[0].s_val), scope_flag, 1);
				if(temp == -1){
					printf("error:%d: undefined: %s\n"
					, yylineno+1, (yyvsp[0].s_val));				
				}
				else{
			
				if(symbol_table[temp].type_mode == 1){
                    			//printf("xcvxcv\n");
                    			//$$ = symbol_table[temp].int_value;
					(yyval.f_val) = 1;
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
					print_mode = 1;                	  	
				}
                	  	else if(symbol_table[temp].type_mode == 2){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			(yyval.f_val) = symbol_table[temp].dou_value;
					print_mode = 2;                	  	
				}
				else if(symbol_table[temp].type_mode == 3){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    		//$$ = symbol_table[temp].dou_value;
					print_mode = 3;
                	  	}
				else if(symbol_table[temp].type_mode == 4){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    		//$$ = symbol_table[temp].dou_value;
					print_mode = 4;
                	  	}
				else if(symbol_table[temp].type_mode == 5){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			(yyval.f_val) = symbol_table[temp].dou_value;
					print_mode = 5; 
					array_mode = 1;               	  	
				}
				else if(symbol_table[temp].type_mode == 6){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			(yyval.f_val) = symbol_table[temp].dou_value;
					print_mode = 6;                	  	
					array_mode = 2;				
				}
				}
				
			}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 307 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = 7; printf("INT_LIT %d\n", (yyvsp[0].i_val)); 		print_mode = 1; }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 308 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.f_val) = (yyvsp[0].f_val); printf("FLOAT_LIT %.6f\n", (yyvsp[0].f_val)); 	print_mode = 2; }
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 309 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("STRING_LIT %s\n", (yyvsp[0].s_val)); strcpy(string_value, (yyvsp[0].s_val)); print_mode = 3; }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 310 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(string_value, (yyvsp[0].s_val)); print_mode = 4; }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 313 "compiler_hw2.y" /* yacc.c:1646  */
    {
						if((yyvsp[-3].i_val) == 1) {
							if(print_mode == 2){
								printf("F to I\n");
							}
						} 
						else if((yyvsp[-3].i_val) == 2) {
							if(print_mode == 1 ){
								printf("I to F\n"); 
							}
						}
					}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 339 "compiler_hw2.y" /* yacc.c:1646  */
    { 	if(print_mode == 1)	{ 
							if(array_mode == 2){ printf("PRINT float32\n"); }						else{
								printf("PRINT int32\n");} }
						else if(print_mode == 2){
							printf("PRINT float32\n"); }
						else if(print_mode == 3){ printf("PRINT string\n"); }
						else if(print_mode == 4){ printf("PRINT bool\n"); }
					;}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 347 "compiler_hw2.y" /* yacc.c:1646  */
    { 	if(print_mode == 1)	{ if(array_mode == 2){ printf("PRINTLN float32\n"); }						else{
								printf("PRINTLN int32\n");} }
						else if(print_mode == 2){ printf("PRINTLN float32\n"); }
						else if(print_mode == 3){ printf("PRINTLN string\n"); }
						else if(print_mode == 4){ printf("PRINTLN bool\n"); }
					;}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 354 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("INC\n"); }
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 355 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("DEC\n"); }
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 357 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 358 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 362 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 363 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 364 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 365 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 368 "compiler_hw2.y" /* yacc.c:1646  */
    { if((yyvsp[0].i_val) == 1) (yyval.i_val) = 5 ;
					if((yyvsp[0].i_val) == 2) (yyval.i_val) = 6; }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1976 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 371 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char *argv[])
{
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }

    yylineno = 0;
    yyparse();

	dump_symbol();
	printf("Total lines: %d\n", yylineno);
    fclose(yyin);
    return 0;
}

static void create_symbol() {
}

static void assign_symbol(int id, double data)
{
    int type = symbol_table[id].type;
    if(type == 1){
        symbol_table[id].assign_bit = 1;
        symbol_table[id].int_value = (int)data;
    }
	
    else if(type == 2){
        symbol_table[id].assign_bit = 1;
        symbol_table[id].dou_value = data;
    }
		
}

static void insert_symbol(char* name, char* types, int type_modes) {
    	printf("> Insert {%s} into symbol table (scope level: %d)\n", name, scope_flag);
	strcpy(symbol_table[var_num].type, types);
    	strcpy(symbol_table[var_num].name, name);
	strcpy(symbol_table[var_num].element, "-");

	symbol_table[var_num].address = address_num;
	symbol_table[var_num].lineno = yylineno;
	
	symbol_table[var_num].type_mode = type_modes;

//	symbol_table[var_num].assign_bit = 0;
	symbol_table[var_num].scope = scope_flag;
	
	if(type_modes == 5) { strcpy(symbol_table[var_num].type, "array"); strcpy(symbol_table[var_num].element,"int32");} 
	
	if(type_modes == 6) { strcpy(symbol_table[var_num].type, "array"); strcpy(symbol_table[var_num].element,"float32");}
	//printf("insert completion");
	address_num++;
	var_num++;
}

int lookup_symbol(char* id, int flag, int check) {
	int i;
    	int temp = flag;

	if(for_flag == 0){ //normal
        	for(i = 0; i < var_num; i++){
            		if(strcmp(symbol_table[i].name, id) == 0 && symbol_table[i].scope == temp && symbol_table[i].be_dumped == 0){
			//printf("%d",i);
                	return i;
	        	}
        	}
	}
	else if(for_flag == 1){//fblock
		for(i = 0; i < var_num; i++){
            		if(strcmp(symbol_table[i].name, id) == 0 && symbol_table[i].scope <= temp && symbol_table[i].be_dumped == 0){
			//printf("%d",i);
                	return i;
	        	}
        	}
	}
	
    	return -1;
}

void dump_symbol() {
	int i, index = 0;
    printf("> Dump symbol table (scope level: %d)\n", scope_flag);
    printf("%-10s%-10s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type");
	for(i = 0; i < var_num; i++){
		if(symbol_table[i].scope == scope_flag && symbol_table[i].be_dumped == 0){
	
    			printf("%-10d%-10s%-10s%-10d%-10d%s\n",
            		index, symbol_table[i].name, symbol_table[i].type, symbol_table[i].address, symbol_table[i].lineno, symbol_table[i].element);
		index++;
		symbol_table[i].be_dumped = 1;		
		}	
	}
}




