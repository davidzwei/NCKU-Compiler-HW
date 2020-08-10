/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 65 "compiler_hw2.y" /* yacc.c:1909  */

    int i_val;
    float f_val;
    char *s_val;
    /* ... */

#line 163 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
