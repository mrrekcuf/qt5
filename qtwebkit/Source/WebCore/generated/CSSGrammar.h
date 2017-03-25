#ifndef CSSGRAMMAR_H
#define CSSGRAMMAR_H
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

#ifndef YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED
# define YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cssyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    LOWEST_PREC = 258,
    UNIMPORTANT_TOK = 259,
    WHITESPACE = 260,
    SGML_CD = 261,
    INCLUDES = 262,
    DASHMATCH = 263,
    BEGINSWITH = 264,
    ENDSWITH = 265,
    CONTAINS = 266,
    STRING = 267,
    IDENT = 268,
    NTH = 269,
    HEX = 270,
    IDSEL = 271,
    IMPORT_SYM = 272,
    PAGE_SYM = 273,
    MEDIA_SYM = 274,
    FONT_FACE_SYM = 275,
    CHARSET_SYM = 276,
    NAMESPACE_SYM = 277,
    VARFUNCTION = 278,
    WEBKIT_RULE_SYM = 279,
    WEBKIT_DECLS_SYM = 280,
    WEBKIT_KEYFRAME_RULE_SYM = 281,
    WEBKIT_KEYFRAMES_SYM = 282,
    WEBKIT_VALUE_SYM = 283,
    WEBKIT_MEDIAQUERY_SYM = 284,
    WEBKIT_SELECTOR_SYM = 285,
    WEBKIT_REGION_RULE_SYM = 286,
    WEBKIT_VIEWPORT_RULE_SYM = 287,
    TOPLEFTCORNER_SYM = 288,
    TOPLEFT_SYM = 289,
    TOPCENTER_SYM = 290,
    TOPRIGHT_SYM = 291,
    TOPRIGHTCORNER_SYM = 292,
    BOTTOMLEFTCORNER_SYM = 293,
    BOTTOMLEFT_SYM = 294,
    BOTTOMCENTER_SYM = 295,
    BOTTOMRIGHT_SYM = 296,
    BOTTOMRIGHTCORNER_SYM = 297,
    LEFTTOP_SYM = 298,
    LEFTMIDDLE_SYM = 299,
    LEFTBOTTOM_SYM = 300,
    RIGHTTOP_SYM = 301,
    RIGHTMIDDLE_SYM = 302,
    RIGHTBOTTOM_SYM = 303,
    ATKEYWORD = 304,
    IMPORTANT_SYM = 305,
    MEDIA_ONLY = 306,
    MEDIA_NOT = 307,
    MEDIA_AND = 308,
    REMS = 309,
    CHS = 310,
    QEMS = 311,
    EMS = 312,
    EXS = 313,
    PXS = 314,
    CMS = 315,
    MMS = 316,
    INS = 317,
    PTS = 318,
    PCS = 319,
    DEGS = 320,
    RADS = 321,
    GRADS = 322,
    TURNS = 323,
    MSECS = 324,
    SECS = 325,
    HERTZ = 326,
    KHERTZ = 327,
    DIMEN = 328,
    INVALIDDIMEN = 329,
    PERCENTAGE = 330,
    FLOATTOKEN = 331,
    INTEGER = 332,
    VW = 333,
    VH = 334,
    VMIN = 335,
    VMAX = 336,
    DPPX = 337,
    DPI = 338,
    DPCM = 339,
    URI = 340,
    FUNCTION = 341,
    ANYFUNCTION = 342,
    CUEFUNCTION = 343,
    NOTFUNCTION = 344,
    CALCFUNCTION = 345,
    MINFUNCTION = 346,
    MAXFUNCTION = 347,
    VAR_DEFINITION = 348,
    UNICODERANGE = 349
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 90 "generated/CSSGrammar.y" /* yacc.c:1909  */

bool boolean;
char character;
int integer;
double number;
CSSParserString string;

StyleRuleBase* rule;
Vector<RefPtr<StyleRuleBase> >* ruleList;
CSSParserSelector* selector;
Vector<OwnPtr<CSSParserSelector> >* selectorList;
CSSSelector::MarginBoxType marginBox;
CSSSelector::Relation relation;
MediaQuerySet* mediaList;
MediaQuery* mediaQuery;
MediaQuery::Restrictor mediaQueryRestrictor;
MediaQueryExp* mediaQueryExp;
CSSParserValue value;
CSSParserValueList* valueList;
Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
StyleKeyframe* keyframe;
Vector<RefPtr<StyleKeyframe> >* keyframeRuleList;
float val;
CSSPropertyID id;
CSSParser::Location location;

#line 177 "generated/CSSGrammar.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int cssyyparse (CSSParser* parser);

#endif /* !YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED  */
#endif
