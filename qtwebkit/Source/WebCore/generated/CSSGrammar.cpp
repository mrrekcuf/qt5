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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cssyyparse
#define yylex           cssyylex
#define yyerror         cssyyerror
#define yydebug         cssyydebug
#define yynerrs         cssyynerrs


/* Copy the first part of user declarations.  */
#line 1 "generated/CSSGrammar.y" /* yacc.c:339  */


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#include <wtf/text/CString.h>
#define YYPRINT(File,Type,Value) if (isCSSTokenAString(Type)) YYFPRINTF(File, "%s", String((Value).string).utf8().data())
#endif


#line 134 "generated/CSSGrammar.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "CSSGrammar.hpp".  */
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
#line 90 "generated/CSSGrammar.y" /* yacc.c:355  */

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

#line 297 "generated/CSSGrammar.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int cssyyparse (CSSParser* parser);

#endif /* !YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 117 "generated/CSSGrammar.y" /* yacc.c:358  */


static inline int cssyyerror(void*, const char*)
{
return 1;
}

static inline bool isCSSTokenAString(int yytype)
{
switch (yytype) {
case IDENT:
case STRING:
case NTH:
case HEX:
case IDSEL:
case DIMEN:
case INVALIDDIMEN:
case URI:
case FUNCTION:
case ANYFUNCTION:
case NOTFUNCTION:
case CALCFUNCTION:
case MINFUNCTION:
case MAXFUNCTION:
case VAR_DEFINITION:
case UNICODERANGE:
return true;
default:
return false;
}
}


#line 346 "generated/CSSGrammar.cpp" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1703

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  337
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  606

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   113,     2,   114,     2,     2,
     104,   102,    20,   106,   105,   109,    18,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,   103,
       2,   111,   108,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,   110,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,    21,   101,   107,     2,     2,     2,
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
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   407,   407,   408,   409,   410,   411,   412,   413,   420,
     426,   432,   438,   450,   456,   473,   474,   477,   479,   480,
     483,   485,   490,   491,   495,   496,   500,   507,   509,   514,
     518,   523,   525,   532,   533,   534,   535,   536,   537,   538,
     539,   555,   558,   559,   560,   564,   565,   576,   577,   588,
     589,   590,   591,   592,   605,   606,   607,   608,   609,   610,
     614,   621,   627,   630,   633,   637,   641,   648,   652,   655,
     658,   664,   665,   669,   670,   674,   680,   683,   689,   702,
     706,   713,   716,   722,   725,   728,   734,   738,   745,   748,
     752,   757,   764,   770,   776,   782,   788,   791,   794,   801,
     894,   900,   906,   907,   911,   912,   920,   926,   930,   938,
     939,   951,   957,   963,   975,   979,   986,   990,   997,  1002,
    1009,  1010,  1014,  1014,  1022,  1025,  1028,  1031,  1034,  1037,
    1040,  1043,  1046,  1049,  1052,  1055,  1058,  1061,  1064,  1067,
    1073,  1079,  1083,  1087,  1140,  1151,  1157,  1185,  1186,  1187,
    1191,  1192,  1196,  1197,  1201,  1207,  1214,  1220,  1226,  1232,
    1237,  1245,  1253,  1259,  1265,  1268,  1272,  1280,  1287,  1293,
    1294,  1295,  1299,  1302,  1307,  1312,  1315,  1320,  1328,  1335,
    1342,  1348,  1354,  1361,  1364,  1370,  1376,  1383,  1394,  1395,
    1396,  1400,  1410,  1416,  1421,  1427,  1432,  1441,  1444,  1447,
    1450,  1453,  1456,  1462,  1463,  1467,  1478,  1487,  1499,  1517,
    1531,  1541,  1551,  1569,  1587,  1588,  1591,  1596,  1599,  1602,
    1608,  1612,  1616,  1622,  1629,  1635,  1645,  1661,  1665,  1671,
    1676,  1684,  1690,  1696,  1697,  1701,  1702,  1706,  1710,  1726,
    1730,  1733,  1736,  1742,  1743,  1744,  1745,  1751,  1752,  1753,
    1754,  1755,  1756,  1757,  1765,  1768,  1771,  1774,  1780,  1781,
    1782,  1783,  1784,  1785,  1786,  1787,  1788,  1789,  1790,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,  1807,
    1808,  1809,  1810,  1811,  1812,  1813,  1814,  1818,  1826,  1835,
    1846,  1847,  1854,  1858,  1861,  1864,  1867,  1872,  1874,  1878,
    1894,  1895,  1899,  1903,  1916,  1928,  1932,  1935,  1950,  1958,
    1965,  1968,  1974,  1982,  1990,  1993,  1999,  2002,  2008,  2026,
    2032,  2033,  2037,  2040,  2040,  2040,  2040,  2040,  2040,  2040,
    2040,  2042,  2046,  2051,  2053,  2054,  2055,  2056
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH", "HEX", "IDSEL", "':'",
  "'.'", "'['", "'*'", "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM",
  "FONT_FACE_SYM", "CHARSET_SYM", "NAMESPACE_SYM", "VARFUNCTION",
  "WEBKIT_RULE_SYM", "WEBKIT_DECLS_SYM", "WEBKIT_KEYFRAME_RULE_SYM",
  "WEBKIT_KEYFRAMES_SYM", "WEBKIT_VALUE_SYM", "WEBKIT_MEDIAQUERY_SYM",
  "WEBKIT_SELECTOR_SYM", "WEBKIT_REGION_RULE_SYM",
  "WEBKIT_VIEWPORT_RULE_SYM", "TOPLEFTCORNER_SYM", "TOPLEFT_SYM",
  "TOPCENTER_SYM", "TOPRIGHT_SYM", "TOPRIGHTCORNER_SYM",
  "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM", "BOTTOMCENTER_SYM",
  "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM", "LEFTTOP_SYM",
  "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM", "RIGHTMIDDLE_SYM",
  "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM", "MEDIA_ONLY",
  "MEDIA_NOT", "MEDIA_AND", "REMS", "CHS", "QEMS", "EMS", "EXS", "PXS",
  "CMS", "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS", "TURNS",
  "MSECS", "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN",
  "PERCENTAGE", "FLOATTOKEN", "INTEGER", "VW", "VH", "VMIN", "VMAX",
  "DPPX", "DPI", "DPCM", "URI", "FUNCTION", "ANYFUNCTION", "CUEFUNCTION",
  "NOTFUNCTION", "CALCFUNCTION", "MINFUNCTION", "MAXFUNCTION",
  "VAR_DEFINITION", "UNICODERANGE", "'{'", "'}'", "')'", "';'", "'('",
  "','", "'+'", "'~'", "'>'", "'-'", "']'", "'='", "'/'", "'#'", "'%'",
  "$accept", "stylesheet", "webkit_rule", "webkit_keyframe_rule",
  "webkit_decls", "webkit_value", "webkit_mediaquery", "webkit_selector",
  "maybe_space", "maybe_sgml", "maybe_charset", "closing_brace",
  "closing_parenthesis", "charset", "ignored_charset", "rule_list",
  "valid_rule", "rule", "block_rule_list", "region_block_rule_list",
  "block_valid_rule", "block_rule", "at_import_header_end_maybe_space",
  "before_import_rule", "import", "namespace", "maybe_ns_prefix",
  "string_or_uri", "media_feature", "maybe_media_value", "media_query_exp",
  "media_query_exp_list", "maybe_and_media_query_exp_list",
  "maybe_media_restrictor", "media_query", "maybe_media_list",
  "media_list", "at_rule_body_start", "before_media_rule",
  "at_rule_header_end_maybe_space", "media", "medium",
  "before_keyframes_rule", "keyframes", "keyframe_name", "keyframes_rule",
  "keyframe_rule", "key_list", "key", "before_page_rule", "page",
  "page_selector", "declarations_and_margins", "margin_box", "$@1",
  "margin_sym", "before_font_face_rule", "font_face", "region_selector",
  "before_region_rule", "region", "combinator", "maybe_unary_operator",
  "unary_operator", "maybe_space_before_declaration",
  "before_selector_list", "at_rule_header_end", "at_selector_end",
  "ruleset", "before_selector_group_item", "selector_list",
  "selector_with_trailing_whitespace", "selector", "namespace_selector",
  "simple_selector", "simple_selector_list", "element_name",
  "specifier_list", "specifier", "class", "attr_name", "attrib", "match",
  "ident_or_string", "pseudo_page", "pseudo", "declaration_list",
  "decl_list", "decl_list_recovery", "declaration", "declaration_recovery",
  "property", "prio", "expr", "valid_expr", "expr_recovery", "operator",
  "term", "unary_term", "function", "calc_func_term", "calc_func_operator",
  "calc_maybe_space", "calc_func_paren_expr", "calc_func_expr",
  "valid_calc_func_expr", "calc_func_expr_list", "calc_function",
  "min_or_max", "min_or_max_function", "save_block", "invalid_at",
  "invalid_rule", "invalid_block", "invalid_square_brackets_block",
  "invalid_parentheses_block", "opening_parenthesis", "error_location",
  "error_recovery", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    58,    46,    91,
      42,   124,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     123,   125,    41,    59,    40,    44,    43,   126,    62,    45,
      93,    61,    47,    35,    37
};
# endif

#define YYPACT_NINF -473

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-473)))

#define YYTABLE_NINF -301

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-301)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     566,   -44,   -42,   -24,   161,    60,   213,   325,  -473,  -473,
    -473,  -473,  -473,  -473,    42,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   339,   339,   339,   339,   339,   339,  -473,   420,
    -473,  -473,  1103,   339,   332,   101,   866,   390,   710,   148,
      89,    87,   501,  -473,   353,  -473,  -473,   379,  -473,   356,
    -473,   394,  -473,   409,  -473,   399,  -473,   802,  -473,  -473,
    -473,  -473,  -473,   363,  1291,   371,   372,   256,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,   435,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  1583,
     415,   565,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,    62,  -473,   419,   479,  -473,  -473,   490,   516,  -473,
     513,  -473,   121,   802,   230,   975,  -473,   666,   452,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  1587,
     348,   364,    86,   582,  -473,  -473,   423,   309,   537,   108,
    -473,   339,   436,    58,  -473,   446,   448,  -473,  -473,  -473,
    -473,  -473,   239,   227,  -473,   339,   339,   339,   447,   339,
     339,   675,   959,   339,   339,   339,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  1171,   339,   339,   339,   959,   339,   262,
     116,  -473,  -473,  -473,   223,  -473,  -473,  -473,  -473,   393,
    -473,  -473,  -473,   445,  -473,  -473,  -473,  -473,  -473,  -473,
     802,  -473,  -473,   666,   694,   703,  -473,  -473,  1101,    76,
     456,  -473,   561,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,   228,  -473,   376,   339,   228,   421,   427,   468,   443,
     426,   461,   339,   463,   802,   445,   444,  -473,  -473,  -473,
    -473,   339,   339,  -473,   778,  -473,  -473,  -473,    51,  -473,
    -473,  -473,    51,    51,  -473,  -473,  1614,    51,  -473,  -473,
    -473,   563,   189,   339,   339,  -473,   339,   339,  -473,    51,
     563,    41,  -473,  -473,  -473,   511,  -473,  -473,   233,   710,
     710,   479,   513,   562,    75,  -473,   339,   339,   339,  -473,
     811,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,    52,   471,    87,   339,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   118,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
     568,   573,  -473,  -473,  -473,  -473,  -473,  -473,   241,   488,
     866,   339,   339,   958,  -473,   524,   410,   101,  -473,  -473,
    -473,   496,  1010,  -473,  -473,   467,  1480,    39,  -473,   806,
    -473,   261,  -473,  -473,   390,   339,   499,  -473,  -473,   710,
    -473,  -473,   507,  -473,   190,  -473,   339,  -473,    88,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   339,   289,  1117,
    -473,  -473,  -473,  -473,   291,   267,  -473,  -473,   492,  -473,
     519,  -473,  -473,   521,  -473,   522,  -473,   524,  -473,  1121,
     110,  -473,   339,    51,   563,   618,   639,  -473,  -473,  -473,
    -473,  -473,  1010,  -473,  -473,  -473,  -473,   390,   190,   253,
     270,  -473,  -473,   207,   277,  -473,  -473,   520,   802,  -473,
    -473,  -473,   248,  -473,  -473,   130,    37,   390,  -473,   339,
    -473,  -473,   321,  -473,  -473,  -473,   339,  -473,  -473,  -473,
      39,  -473,  -473,   339,   339,   563,   100,   339,   249,    62,
     251,  -473,  -473,   294,  -473,  -473,  -473,   520,  -473,  -473,
    -473,   259,  -473,  -473,  -473,  -473,  -473,  -473,  1411,  -473,
    -473,   110,  -473,   321,  -473,   261,  -473,   555,  -473,  -473,
     710,  -473,    47,   339,   205,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,   339,
    1355,  -473,   339,   110,   866,  -473,  -473,    66,  -473,  1411,
    -473,    87,    53,  1437,  -473,  1498,  -473,  -473,   339,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   110,  -473,  -473,   339,   339,  1273,  -473,    87,
    -473,    35,  -473,   410,   110,  -473
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      15,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,    15,    15,    15,    20,    15,    15,    15,    15,    15,
      15,     1,     3,     8,     4,     5,     6,     7,    16,     0,
      17,    21,   155,   154,     0,     0,     0,    83,     0,     0,
       0,    31,     0,    15,     0,    39,    38,     0,    34,     0,
      37,     0,    35,     0,    36,     0,    40,     0,    33,   332,
      15,    15,    15,     0,     0,   218,   215,     0,   111,   110,
     153,   152,    15,    15,   107,     0,   150,    15,    15,    15,
      15,   278,   279,   276,   275,   277,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      15,   260,   259,   258,   280,   281,   282,   283,   284,   285,
     286,    15,    15,    15,   310,   311,    15,    15,    15,     0,
       0,     0,   237,    15,    15,    15,    15,    15,    84,    85,
      79,    86,    15,     0,   181,   187,   186,     0,     0,    15,
     182,   169,     0,   165,     0,     0,   164,   172,     0,   183,
     188,   189,   190,   333,    28,    27,    15,    19,    18,     0,
       0,    71,     0,     0,    15,    15,     0,     0,     0,     0,
     333,   232,     0,     0,    11,   219,   216,    15,    15,   332,
      15,   227,     0,     0,   109,   245,   246,   251,     0,   247,
     249,     0,     0,   250,   252,   257,    15,    15,    12,   332,
      15,    15,   236,     0,   243,   254,   255,     0,   256,     0,
       0,    13,   171,   206,     0,    15,    15,    15,   191,     0,
     170,   162,    14,     0,   166,   168,   163,    15,    15,    15,
       0,   181,   182,   175,     0,     0,   185,   184,     0,     0,
       0,    15,     0,    42,    41,    17,    44,    43,    70,    69,
      15,     0,     9,     0,    60,     0,    83,     0,     0,     0,
     119,     0,    95,     0,     0,   156,     0,   229,    15,    15,
      15,   221,   220,   333,     0,    10,    15,    15,     0,    25,
      24,   288,     0,     0,    15,    15,     0,     0,   290,   302,
     305,   297,     0,   248,   244,   333,   241,   240,   238,     0,
     297,     0,    15,    15,    15,    81,   207,    15,   151,     0,
       0,    15,     0,     0,     0,    15,   147,   148,   149,   167,
       0,    23,   334,   333,   326,   324,   329,   331,   330,   325,
     327,   328,    22,   323,   319,   335,   336,   337,   333,    26,
     318,     0,     0,    32,    72,    73,    74,    15,    65,    66,
      15,    90,     0,    93,    98,   103,   102,    15,   115,   114,
     116,     0,    15,   118,   143,   142,    93,   156,     0,     0,
       0,   223,   222,     0,   230,   234,     0,     0,    15,   287,
     289,     0,     0,   292,   309,   298,     0,     0,   301,   239,
     313,   306,    15,   312,    83,    99,     0,    15,    87,     0,
      15,    15,     0,   178,     0,    15,   192,    15,     0,   198,
     199,   200,   201,   202,   193,   197,    15,   159,     0,     0,
      15,    30,   317,   316,     0,    88,    92,    15,     0,    15,
       0,   117,   205,     0,    15,     0,    93,   234,    15,     0,
       0,   108,   253,     0,   297,     0,     0,   303,   304,    15,
      15,   308,     0,    80,    15,    15,    15,    83,     0,     0,
       0,    15,   180,     0,     0,   195,    15,     0,     0,   321,
     320,   322,     0,    67,    68,     0,     0,    83,    93,    45,
      93,    93,     0,    93,    15,   225,   233,   228,   106,   291,
       0,   293,   294,   295,   296,   297,     0,    75,    76,    82,
       0,   212,   210,     0,   209,    15,   213,     0,   204,   203,
      15,     0,    29,    63,    62,    64,    91,    15,     0,    15,
      15,     0,    15,     0,   299,   307,    15,     0,   208,   211,
       0,    15,     0,    45,     0,   314,    54,    17,    58,    57,
      52,    53,    50,    51,    59,    49,    97,    56,    55,   104,
       0,   141,    47,     0,     0,    15,   179,     0,   194,     0,
     315,    46,     0,     0,   120,     0,   158,    15,    78,   196,
      96,   101,    15,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   113,
      15,   122,     0,    17,   146,    77,   105,     0,    15,    48,
     121,     0,    15,     0,     0,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,     0,  -239,
    -473,  -234,  -251,  -473,  -473,  -473,   500,  -473,   125,  -473,
      98,  -473,  -473,  -473,  -472,  -444,  -473,   414,  -473,  -473,
     271,   216,  -473,  -160,   -35,  -473,   264,  -333,  -473,  -143,
     -10,  -473,  -473,    -7,  -473,  -473,   124,  -473,   314,  -473,
       2,  -473,  -473,  -473,  -473,  -473,  -473,    12,  -473,  -473,
    -157,  -473,   384,   -34,   -22,  -473,  -297,   525,    13,  -473,
     -43,  -473,   225,   477,  -140,   298,   553,   141,  -127,  -473,
     387,  -473,   293,   195,   345,  -473,  -348,  -473,   642,   643,
    -146,  -473,   279,  -186,  -473,    71,  -473,   514,  -103,  -473,
     328,  -473,  -270,   338,  -200,  -473,  -473,  -473,  -473,  -473,
    -294,   574,   595,   -16,  -473,  -473,  -473,  -130,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    33,    41,
      30,   535,   281,    31,   243,   159,    43,   245,   518,   565,
     536,   537,   255,    44,    45,    46,   251,   347,   456,   527,
     130,   131,   398,   132,   351,   475,   352,   429,    47,   257,
     540,   305,    49,   541,   357,   562,    72,    73,    74,    51,
     542,   362,   563,   590,   598,   591,    53,   543,   367,    55,
      56,   230,    75,   119,    34,    57,   369,   223,   545,   468,
     142,   143,   144,   145,   146,   404,   147,   148,   149,   150,
     314,   151,   416,   510,   363,   152,    63,    64,    65,    66,
     181,    67,   439,   120,   121,   202,   203,   122,   123,   124,
     289,   386,   387,   290,   291,   292,   301,   125,   126,   127,
     546,   547,   548,   335,   336,   337,   338,   170,   238
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    76,   133,   224,   334,   282,   343,   300,    22,    23,
      24,    25,    26,    27,   169,    32,   197,    35,    36,    37,
      38,   237,    48,   155,   263,    50,   267,   378,   440,    40,
     391,   379,   380,   434,    52,   266,   384,   -89,   426,   279,
      28,   279,   161,   162,    54,    58,   538,    28,   390,   273,
     393,   279,    28,   321,    68,   428,    15,    28,    16,   449,
     171,   172,   173,    28,   420,    19,    69,   -15,    29,   295,
     435,    28,   182,   183,   539,   268,    17,   185,   186,   187,
     188,    28,   409,   410,   411,   412,   413,   538,   375,   288,
     319,    28,   157,   158,    28,   409,   410,   411,   412,   413,
     189,   156,    68,   484,   288,    28,    28,   237,   237,   221,
     321,   190,   191,   192,    69,   539,   193,   194,   195,   426,
     -15,    28,   221,   204,   205,   206,   207,   208,   374,   303,
     513,   209,   210,  -151,   521,   602,   451,   -89,   373,   219,
     -89,   280,   427,   280,   249,   517,   392,   519,   520,    48,
     522,   450,    50,   280,   332,   421,   239,   558,   286,    70,
     389,    52,    71,   254,   256,   258,   260,   262,   471,   403,
     405,    54,    58,   286,   490,   553,   569,   271,   272,   339,
     274,  -151,   444,   383,   437,   414,   415,   252,   418,  -300,
     199,   462,   489,   237,  -300,   -15,   293,   294,   465,   415,
     296,   297,   564,   419,   304,   321,   488,    70,  -157,  -300,
      71,   332,    28,  -157,   430,   308,   309,   310,  -156,   433,
     304,   368,   222,   427,   340,   525,  -157,   316,   317,   318,
     153,   225,    28,   514,   454,   226,   306,   349,    28,   524,
     345,   341,   221,   359,    28,   365,   400,   401,   153,   600,
     344,   154,   495,    28,    28,   604,    28,   179,    28,   403,
     225,    18,   283,   287,   226,   570,   526,    28,   370,   371,
     372,   594,    28,   180,    76,    28,   376,   377,   299,   288,
     -83,   449,    28,   288,   381,   382,   234,   551,   235,   469,
     322,  -300,   -15,   487,  -300,   -15,    28,   454,   561,    28,
     560,  -300,   394,   395,   396,   153,   332,   399,   323,   504,
     261,   406,   505,    20,   -15,   417,   307,   324,   346,   566,
     302,  -214,    59,   128,   129,    21,   423,   276,   571,   589,
    -160,  -160,   277,    59,    60,  -160,   227,   228,   229,    70,
     275,  -144,    71,    76,    28,    60,  -157,   424,   286,   288,
     425,   512,   286,   528,   599,   501,   505,   262,   560,  -161,
    -161,   544,   262,   388,  -161,   227,   228,   229,   567,    28,
     605,   -83,   502,   450,   320,   163,    61,   250,   442,   506,
     325,   326,   327,   328,   329,   330,   331,    61,   165,   153,
     556,   153,   452,   333,   473,    28,   529,   457,    28,   470,
     459,   460,   544,   164,   463,   464,   311,   406,   474,   -15,
    -214,    59,   482,   312,   141,    28,   467,   166,   286,    62,
     472,    39,  -214,    60,   259,   -15,    28,   477,   -15,   479,
      62,    28,   -15,  -214,   167,   168,   -15,   179,   486,   360,
     -15,    28,   516,   361,  -224,   322,   128,   129,   153,   493,
     494,   248,    28,   236,   496,   497,   498,  -174,   500,   515,
     278,   503,   523,   323,   174,    61,   507,   135,   136,   137,
     138,   139,   324,    28,   177,   178,   153,   128,   129,   348,
     355,   356,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,   550,   209,
     212,    28,   160,   213,    28,   530,   -15,   214,    62,   443,
     532,  -214,   455,   -15,   -15,   184,   198,   533,   340,   549,
     211,   -95,   552,   -15,   -95,    28,   554,   353,    76,   218,
     354,   557,   508,   509,   220,   325,   326,   327,   328,   329,
     330,   331,   264,   153,   153,  -224,   358,  -224,   333,   269,
     315,   270,  -174,  -174,  -174,   568,   153,  -174,  -174,  -174,
    -174,   153,   342,   366,   364,  -235,   199,   595,   385,   397,
    -235,   153,   596,   445,   422,   407,   446,  -242,  -242,   438,
    -242,   215,   216,   253,   217,   361,   432,   -15,   436,   461,
     597,   -15,   478,  -242,   -15,     1,     2,     3,   601,     4,
       5,     6,   603,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,   480,
    -235,   481,   483,   491,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,   492,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   555,   559,   244,
    -242,  -242,  -242,   593,  -242,   453,  -235,  -235,  -235,   350,
     200,  -242,   -15,   499,  -242,   279,   199,   201,  -242,  -242,
      28,   135,   136,   137,   138,   139,   572,    77,    78,   476,
      79,   441,   402,   511,   265,   236,   313,   458,   233,  -177,
     408,   466,   531,    80,   236,   431,   175,   176,  -173,   135,
     136,   137,   138,   139,   447,    28,   485,   298,   135,   136,
     137,   138,   139,   134,   448,   135,   136,   137,   138,   139,
     140,   141,     0,   246,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   247,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     113,   114,   115,     0,   116,     0,     0,   280,     0,   179,
       0,    70,     0,    28,    71,     0,     0,     0,   117,   118,
      77,    78,     0,    79,  -177,  -177,  -177,     0,     0,  -177,
    -177,  -177,  -177,  -173,  -173,  -173,    80,  -301,  -173,  -173,
    -173,  -173,   236,     0,     0,   134,  -176,   135,   136,   137,
     138,   139,   140,   141,     0,   323,   135,   136,   137,   138,
     139,     0,     0,     0,   324,     0,     0,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,    28,     0,   113,   114,   115,     0,   116,    77,    78,
       0,    79,     0,     0,    70,     0,     0,    71,     0,     0,
       0,   117,   118,     0,    80,     0,     0,   325,   326,   327,
     328,   329,   330,   331,     0,     0,   153,     0,     0,     0,
     333,  -176,  -176,  -176,     0,     0,  -176,  -176,  -176,  -176,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,  -231,   322,
     199,   113,   114,   115,    28,   116,     0,     0,     0,     0,
       0,     0,    70,     0,     0,    71,     0,   323,     0,   117,
     118,     0,     0,     0,     0,     0,   324,   284,   231,     0,
     135,   136,   137,   138,   139,   232,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,     0,     0,     0,    28,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   284,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   325,
     326,   327,   328,   329,   330,   331,     0,     0,   153,  -231,
       0,  -231,   333,   285,     0,    70,     0,     0,    71,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,   321,   322,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,   285,     0,    70,   279,   322,    71,
     323,  -226,   179,     0,     0,   -61,  -112,   -94,  -140,   324,
      42,     0,     0,     0,     0,  -100,   323,     0,     0,  -145,
       0,     0,     0,     0,     0,   324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,     0,    79,     0,     0,     0,
       0,     0,   325,   326,   327,   328,   329,   330,   331,    80,
       0,   153,   332,     0,     0,   333,     0,     0,   325,   326,
     327,   328,   329,   330,   331,     0,     0,   153,     0,   280,
       0,   333,  -226,     0,  -226,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   113,   114,   115,     0,
     116,     0,     0,  -214,    59,     0,     0,    70,    28,     0,
      71,     0,     0,     0,   117,   118,    60,     0,     0,     0,
       0,  -217,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,     0,    61,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,  -214,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,    62,     0,     0,  -214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,  -217,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,     0,
      61,   321,   534,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -155,     0,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,   -61,  -112,   -94,  -140,   321,    42,     0,
       0,     0,     0,  -100,     0,     0,     0,  -145,     0,     0,
       0,     0,     0,    62,     0,     0,  -214,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,     0,     0,     0,     0,     0,     0,     0,   321,   592,
       0,     0,     0,     0,     0,     0,     0,     0,   284,     0,
       0,  -155,   332,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
       0,  -112,   -94,  -140,     0,     0,     0,     0,     0,     0,
    -100,     0,     0,     0,     0,     0,     0,     0,   332,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   285,     0,    70,    -2,   240,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
    -155,     0,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   -61,
    -112,   -94,  -140,   241,    42,     0,     0,     0,     0,  -100,
       0,     0,     0,  -145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   196,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
       0,    35,    37,   143,   238,   191,   245,   207,     8,     9,
      10,    11,    12,    13,    57,    15,   119,    17,    18,    19,
      20,   148,    32,    39,   167,    32,   172,   278,   376,    29,
     300,   282,   283,   366,    32,   170,   287,     0,     1,     0,
       5,     0,    42,    43,    32,    32,   518,     5,   299,   179,
     301,     0,     5,     0,     1,   352,   100,     5,   100,    20,
      60,    61,    62,     5,    12,     5,    13,     5,    26,   199,
     367,     5,    72,    73,   518,    17,   100,    77,    78,    79,
      80,     5,     7,     8,     9,    10,    11,   559,   274,   192,
     230,     5,     5,     6,     5,     7,     8,     9,    10,    11,
     100,    12,     1,   436,   207,     5,     5,   234,   235,     1,
       0,   111,   112,   113,    13,   559,   116,   117,   118,     1,
      58,     5,     1,   123,   124,   125,   126,   127,   274,    13,
       0,   131,   132,    80,   482,   100,   387,   100,   273,   139,
     103,   102,   105,   102,   160,   478,   105,   480,   481,   159,
     483,   112,   159,   102,   101,   103,   156,   110,   192,   106,
     295,   159,   109,   163,   164,   165,   166,   167,   419,   309,
     310,   159,   159,   207,   444,   523,   110,   177,   178,   103,
     180,    80,   382,   286,   370,   110,   111,   101,   323,     0,
       1,     1,   443,   320,     5,     5,   196,   197,   110,   111,
     200,   201,   550,   338,   104,     0,   440,   106,   100,    20,
     109,   101,     5,   105,   357,   215,   216,   217,   100,   362,
     104,   264,   101,   105,   240,   495,   105,   227,   228,   229,
     100,     1,     5,   103,   394,     5,    13,   253,     5,   490,
      12,   241,     1,   259,     5,   261,    13,    14,   100,   597,
     250,   103,   452,     5,     5,   603,     5,     1,     5,   399,
       1,   100,   191,   192,     5,   559,    17,     5,   268,   269,
     270,   565,     5,    17,   308,     5,   276,   277,   207,   382,
      13,    20,     5,   386,   284,   285,   145,   521,   147,     0,
       1,   102,   102,   439,   105,   105,     5,   457,   537,     5,
     534,   112,   302,   303,   304,   100,   101,   307,    19,   102,
       1,   311,   105,   100,     5,   315,    93,    28,    90,   553,
      58,     0,     1,    56,    57,     0,   342,   100,   562,   563,
     100,   101,   105,     1,    13,   105,   106,   107,   108,   106,
     101,   100,   109,   377,     5,    13,   105,   347,   382,   452,
     350,   103,   386,   102,   593,   102,   105,   357,   592,   100,
     101,   518,   362,   292,   105,   106,   107,   108,   554,     5,
     604,   104,   102,   112,   233,    22,    55,    13,   378,   102,
      91,    92,    93,    94,    95,    96,    97,    55,    32,   100,
     530,   100,   392,   104,   103,     5,   102,   397,     5,   110,
     400,   401,   559,    24,   404,   405,    13,   407,   424,   100,
       0,     1,   434,    20,    21,     5,   416,    23,   452,    98,
     420,     1,   101,    13,     1,     5,     5,   427,     5,   429,
      98,     5,    12,   101,    25,    36,    13,     1,   438,    13,
      17,     5,   477,    17,     0,     1,    56,    57,   100,   449,
     450,   103,     5,     1,   454,   455,   456,     5,   458,   475,
      13,   461,   484,    19,   101,    55,   466,    15,    16,    17,
      18,    19,    28,     5,   103,   103,   100,    56,    57,   103,
      12,    13,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   520,   499,
      21,     5,     1,    13,     5,   505,     5,    17,    98,    13,
     510,   101,    13,    12,    13,    80,   101,   517,   534,   519,
     101,   100,   522,   100,   103,     5,   526,   100,   562,    13,
     103,   531,    12,    13,    21,    91,    92,    93,    94,    95,
      96,    97,     5,   100,   100,   101,   103,   103,   104,   103,
     105,   103,   100,   101,   102,   555,   100,   105,   106,   107,
     108,   100,     1,   100,   103,     0,     1,   567,     5,    58,
       5,   100,   572,   106,   103,    13,   109,    12,    13,    55,
      15,    91,    92,     1,    94,    17,    13,     5,   100,    82,
     590,    90,   100,    28,    12,    29,    30,    31,   598,    33,
      34,    35,   602,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   100,
      55,   100,   100,     5,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     5,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   102,   533,   159,
      95,    96,    97,   565,    99,   394,   101,   102,   103,   255,
     105,   106,    90,   457,   109,     0,     1,   112,   113,   114,
       5,    15,    16,    17,    18,    19,   562,    12,    13,   425,
      15,   377,   308,   468,   169,     1,   219,   399,   145,     5,
     313,   408,   507,    28,     1,   360,    64,    64,     5,    15,
      16,    17,    18,    19,   386,     5,   437,   203,    15,    16,
      17,    18,    19,    13,   386,    15,    16,    17,    18,    19,
      20,    21,    -1,   159,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   159,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    -1,    99,    -1,    -1,   102,    -1,     1,
      -1,   106,    -1,     5,   109,    -1,    -1,    -1,   113,   114,
      12,    13,    -1,    15,   100,   101,   102,    -1,    -1,   105,
     106,   107,   108,   100,   101,   102,    28,     1,   105,   106,
     107,   108,     1,    -1,    -1,    13,     5,    15,    16,    17,
      18,    19,    20,    21,    -1,    19,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    28,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,     5,    -1,    95,    96,    97,    -1,    99,    12,    13,
      -1,    15,    -1,    -1,   106,    -1,    -1,   109,    -1,    -1,
      -1,   113,   114,    -1,    28,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,   100,   101,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     1,
       1,    95,    96,    97,     5,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,   109,    -1,    19,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    28,    28,    13,    -1,
      15,    16,    17,    18,    19,    20,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,     5,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    28,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,   100,   101,
      -1,   103,   104,   104,    -1,   106,    -1,    -1,   109,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,     0,     1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,   104,    -1,   106,     0,     1,   109,
      19,     0,     1,    -1,    -1,    22,    23,    24,    25,    28,
      27,    -1,    -1,    -1,    -1,    32,    19,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    28,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,   100,    -1,   102,
      -1,   104,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    -1,
      99,    -1,    -1,     0,     1,    -1,    -1,   106,     5,    -1,
     109,    -1,    -1,    -1,   113,   114,    13,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    27,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    13,   101,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,   106,     0,     1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    30,    31,    33,    34,    35,   116,   117,   118,
     119,   120,   121,   122,   123,   100,   100,   100,   100,     5,
     100,     0,   123,   123,   123,   123,   123,   123,     5,    26,
     125,   128,   123,   123,   179,   123,   123,   123,   123,     1,
     123,   124,    27,   131,   138,   139,   140,   153,   155,   157,
     158,   164,   165,   171,   172,   174,   175,   180,   183,     1,
      13,    55,    98,   201,   202,   203,   204,   206,     1,    13,
     106,   109,   161,   162,   163,   177,   178,    12,    13,    15,
      28,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    95,    96,    97,    99,   113,   114,   178,
     208,   209,   212,   213,   214,   222,   223,   224,    56,    57,
     145,   146,   148,   149,    13,    15,    16,    17,    18,    19,
      20,    21,   185,   186,   187,   188,   189,   191,   192,   193,
     194,   196,   200,   100,   103,   228,    12,     5,     6,   130,
       1,   123,   123,    22,    24,    32,    23,    25,    36,   185,
     232,   123,   123,   123,   101,   203,   204,   103,   103,     1,
      17,   205,   123,   123,    80,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,    78,   213,   101,     1,
     105,   112,   210,   211,   123,   123,   123,   123,   123,   123,
     123,   101,    21,    13,    17,    91,    92,    94,    13,   123,
      21,     1,   101,   182,   189,     1,     5,   106,   107,   108,
     176,    13,    20,   191,   192,   192,     1,   193,   233,   123,
       1,    26,    54,   129,   131,   132,   226,   227,   103,   228,
      13,   141,   101,     1,   123,   137,   123,   154,   123,     1,
     123,     1,   123,   154,     5,   182,   233,   205,    17,   103,
     103,   123,   123,   232,   123,   101,   100,   105,    13,     0,
     102,   127,   208,   210,    28,   104,   178,   210,   213,   215,
     218,   219,   220,   123,   123,   232,   123,   123,   212,   210,
     219,   221,    58,    13,   104,   156,    13,    93,   123,   123,
     123,    13,    20,   188,   195,   105,   123,   123,   123,   189,
     192,     0,     1,    19,    28,    91,    92,    93,    94,    95,
      96,    97,   101,   104,   126,   228,   229,   230,   231,   103,
     228,   123,     1,   124,   123,    12,    90,   142,   103,   228,
     142,   149,   151,   100,   103,    12,    13,   159,   103,   228,
      13,    17,   166,   199,   103,   228,   100,   173,   185,   181,
     123,   123,   123,   233,   205,   208,   123,   123,   127,   127,
     127,   123,   123,   213,   127,     5,   216,   217,   210,   233,
     127,   217,   105,   127,   123,   123,   123,    58,   147,   123,
      13,    14,   177,   189,   190,   189,   123,    13,   195,     7,
       8,     9,    10,    11,   110,   111,   197,   123,   233,   233,
      12,   103,   103,   228,   123,   123,     1,   105,   181,   152,
     154,   199,    13,   154,   152,   181,   100,   208,    55,   207,
     201,   163,   123,    13,   219,   106,   109,   215,   218,    20,
     112,   127,   123,   145,   148,    13,   143,   123,   190,   123,
     123,    82,     1,   123,   123,   110,   197,   123,   184,     0,
     110,   127,   123,   103,   228,   150,   151,   123,   100,   123,
     100,   100,   179,   100,   152,   207,   123,   205,   126,   127,
     217,     5,     5,   123,   123,   219,   123,   123,   123,   146,
     123,   102,   102,   123,   102,   105,   102,   123,    12,    13,
     198,   187,   103,     0,   103,   228,   149,   152,   133,   152,
     152,   201,   152,   179,   127,   217,    17,   144,   102,   102,
     123,   198,   123,   123,     1,   126,   135,   136,   139,   140,
     155,   158,   165,   172,   175,   183,   225,   226,   227,   123,
     179,   126,   123,   201,   123,   102,   189,   123,   110,   133,
     126,   124,   160,   167,   201,   134,   126,   208,   123,   110,
     225,   126,   161,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   126,
     168,   170,     1,   135,   225,   123,   123,   123,   169,   124,
     201,   123,   100,   123,   201,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     118,   119,   120,   121,   122,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     137,   138,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   141,   141,   142,   142,   143,   144,   144,   145,   146,
     146,   147,   147,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   152,   153,   154,   155,   155,   155,   156,
     157,   158,   159,   159,   160,   160,   161,   162,   162,   163,
     163,   163,   164,   165,   165,   165,   166,   166,   166,   166,
     167,   167,   169,   168,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     171,   172,   172,   172,   173,   174,   175,   176,   176,   176,
     177,   177,   178,   178,   179,   180,   181,   182,   183,   184,
     185,   185,   185,   186,   187,   187,   187,   187,   187,   188,
     188,   188,   189,   189,   189,   189,   189,   189,   190,   190,
     190,   191,   191,   192,   192,   192,   193,   193,   193,   193,
     193,   194,   195,   196,   196,   196,   196,   197,   197,   197,
     197,   197,   197,   198,   198,   199,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   203,   204,   204,   204,   204,   204,
     204,   205,   206,   207,   207,   208,   208,   209,   209,   210,
     211,   211,   211,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     215,   215,   215,   216,   216,   216,   216,   217,   217,   218,
     219,   219,   220,   220,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   228,
     229,   229,   230,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   232,   233,   233,   233,   233,   233
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     6,
       6,     5,     5,     5,     5,     0,     2,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     5,     3,     3,     5,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     7,     7,     4,     4,     6,     6,     3,
       3,     0,     2,     1,     1,     2,     0,     4,     9,     1,
       5,     0,     3,     0,     1,     1,     1,     4,     0,     1,
       1,     4,     2,     0,     0,     1,    10,     8,     4,     2,
       0,    10,     1,     1,     0,     3,     6,     1,     5,     2,
       1,     1,     0,    10,     4,     4,     1,     2,     1,     0,
       1,     4,     0,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     4,     4,     1,     0,    10,     2,     2,     2,
       1,     0,     1,     1,     1,     0,     0,     0,     9,     0,
       1,     6,     2,     2,     1,     1,     2,     3,     2,     1,
       2,     2,     1,     2,     1,     2,     3,     2,     1,     5,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     4,     8,     5,     9,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     7,     6,
       6,     7,     6,     6,     0,     1,     2,     1,     1,     2,
       3,     3,     4,     4,     3,     6,     5,     2,     6,     3,
       4,     3,     2,     2,     0,     1,     2,     1,     3,     3,
       2,     2,     0,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     5,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       1,     4,     2,     3,     3,     3,     3,     0,     1,     5,
       1,     2,     1,     3,     3,     1,     2,     5,     5,     4,
       1,     1,     4,     4,     1,     2,     3,     3,     2,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     2,     2,     2,     2
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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
                  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, CSSParser* parser)
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
                                              , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, CSSParser* parser)
{
  YYUSE (yyvaluep);
  YYUSE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CSSParser* parser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, parser);
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
        case 9:
#line 420 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_rule = (yyvsp[-2].rule);
}
#line 2133 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 426 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_keyframe = (yyvsp[-2].keyframe);
}
#line 2141 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 432 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

}
#line 2149 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 438 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].valueList)) {
parser->m_valueList = parser->sinkFloatingValueList((yyvsp[-1].valueList));
int oldParsedProperties = parser->m_parsedProperties.size();
if (!parser->parseValue(parser->m_id, parser->m_important))
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
parser->m_valueList = nullptr;
}
}
#line 2163 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 450 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_mediaQuery = parser->sinkFloatingMediaQuery((yyvsp[-1].mediaQuery));
}
#line 2171 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 456 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].selectorList)) {
if (parser->m_selectorListForParseSelector)
parser->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[-1].selectorList));
}
}
#line 2182 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 485 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2189 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 500 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetEncodingFromCharsetRule((yyvsp[-2].string));
if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
(yyval.rule) = 0;
}
#line 2201 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 507 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2208 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 509 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2215 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 514 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {

(yyval.rule) = 0;
}
#line 2224 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 518 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2232 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 525 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].rule) && parser->m_styleSheet)
parser->m_styleSheet->parserAppendRule((yyvsp[-1].rule));
}
#line 2241 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 555 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_hadSyntacticallyValidCSSRule = true;
}
#line 2249 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 564 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.ruleList) = 0; }
#line 2255 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 565 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.ruleList) = (yyvsp[-2].ruleList);
if ((yyvsp[-1].rule)) {
if (!(yyval.ruleList))
(yyval.ruleList) = parser->createRuleList();
(yyval.ruleList)->append((yyvsp[-1].rule));
}
}
#line 2268 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 576 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.ruleList) = 0; }
#line 2274 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 577 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.ruleList) = (yyvsp[-2].ruleList);
if ((yyvsp[-1].rule)) {
if (!(yyval.ruleList))
(yyval.ruleList) = parser->createRuleList();
(yyval.ruleList)->append((yyvsp[-1].rule));
}
}
#line 2287 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 614 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
parser->markRuleBodyStart();
}
#line 2296 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 621 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
}
#line 2304 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 627 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createImportRule((yyvsp[-3].string), (yyvsp[-1].mediaList));
}
#line 2312 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 630 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createImportRule((yyvsp[-3].string), (yyvsp[-1].mediaList));
}
#line 2320 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 633 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2329 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 637 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2338 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 641 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2347 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 648 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->addNamespace((yyvsp[-3].string), (yyvsp[-2].string));
(yyval.rule) = 0;
}
#line 2356 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 652 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2364 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 655 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2372 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 658 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2380 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 664 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string).clear(); }
#line 2386 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 665 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 2392 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 674 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 2400 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 680 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = 0;
}
#line 2408 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 683 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-1].valueList);
}
#line 2416 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 689 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {


if ((yyvsp[-8].mediaQueryRestrictor) != MediaQuery::None)
(yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp("", 0);
else {
(yyvsp[-4].string).lower();
(yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp((yyvsp[-4].string), (yyvsp[-2].valueList));
}
}
#line 2431 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 702 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
(yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[0].mediaQueryExp)));
}
#line 2440 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 706 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = (yyvsp[-4].mediaQueryExpList);
(yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[0].mediaQueryExp)));
}
#line 2449 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 713 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
}
#line 2457 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 716 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = (yyvsp[0].mediaQueryExpList);
}
#line 2465 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 722 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::None;
}
#line 2473 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 725 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::Only;
}
#line 2481 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 728 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::Not;
}
#line 2489 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 734 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQuery) = parser->createFloatingMediaQuery(parser->sinkFloatingMediaQueryExpList((yyvsp[0].mediaQueryExpList)));
}
#line 2497 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 738 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyvsp[-1].string).lower();
(yyval.mediaQuery) = parser->createFloatingMediaQuery((yyvsp[-3].mediaQueryRestrictor), (yyvsp[-1].string), parser->sinkFloatingMediaQueryExpList((yyvsp[0].mediaQueryExpList)));
}
#line 2506 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 745 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = parser->createMediaQuerySet();
}
#line 2514 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 752 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = parser->createMediaQuerySet();
(yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[0].mediaQuery)));
parser->updateLastMediaLine((yyval.mediaList));
}
#line 2524 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 757 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = (yyvsp[-3].mediaList);
if ((yyval.mediaList)) {
(yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[0].mediaQuery)));
parser->updateLastMediaLine((yyval.mediaList));
}
}
#line 2536 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 764 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = 0;
}
#line 2544 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 770 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleBodyStart();
}
#line 2552 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 776 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
}
#line 2560 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 782 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
}
#line 2568 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 788 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createMediaRule((yyvsp[-6].mediaList), (yyvsp[-1].ruleList));
}
#line 2576 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 791 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createEmptyMediaRule((yyvsp[-1].ruleList));
}
#line 2584 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 794 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2593 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 801 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 2601 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 894 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
}
#line 2609 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 900 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createKeyframesRule((yyvsp[-6].string), parser->sinkFloatingKeyframeVector((yyvsp[-1].keyframeRuleList)));
}
#line 2617 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 911 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.keyframeRuleList) = parser->createFloatingKeyframeVector(); }
#line 2623 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 912 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.keyframeRuleList) = (yyvsp[-2].keyframeRuleList);
if ((yyvsp[-1].keyframe))
(yyval.keyframeRuleList)->append((yyvsp[-1].keyframe));
}
#line 2633 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 920 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.keyframe) = parser->createKeyframe((yyvsp[-5].valueList));
}
#line 2641 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 926 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 2650 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 930 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-4].valueList);
if ((yyval.valueList))
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 2660 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 938 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[-1].integer) * (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 2666 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 939 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
CSSParserString& str = (yyvsp[0].string);
if (str.equalIgnoringCase("from"))
(yyval.value).fValue = 0;
else if (str.equalIgnoringCase("to"))
(yyval.value).fValue = 100;
else {
(yyval.value).unit = 0;
YYERROR;
}
}
#line 2683 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 951 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).unit = 0;
}
#line 2691 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 957 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
}
#line 2699 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 964 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-6].selector))
(yyval.rule) = parser->createPageRule(parser->sinkFloatingSelector((yyvsp[-6].selector)));
else {

parser->clearProperties();

(yyval.rule) = 0;
parser->popRuleData();
}
}
#line 2715 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 975 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->popRuleData();
(yyval.rule) = 0;
}
#line 2724 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 979 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->popRuleData();
(yyval.rule) = 0;
}
#line 2733 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 986 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[0].string), parser->m_defaultNamespace));
(yyval.selector)->setForPage();
}
#line 2742 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 990 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector)) {
(yyval.selector)->prependTagSelector(QualifiedName(nullAtom, (yyvsp[-1].string), parser->m_defaultNamespace));
(yyval.selector)->setForPage();
}
}
#line 2754 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 997 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector)->setForPage();
}
#line 2764 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1002 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setForPage();
}
#line 2773 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1014 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->startDeclarationsForMarginBox();
}
#line 2781 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1016 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createMarginAtRule((yyvsp[-6].marginBox));
}
#line 2789 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1022 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
}
#line 2797 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1025 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopLeftMarginBox;
}
#line 2805 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1028 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopCenterMarginBox;
}
#line 2813 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1031 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopRightMarginBox;
}
#line 2821 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1034 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
}
#line 2829 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1037 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
}
#line 2837 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1040 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
}
#line 2845 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1043 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
}
#line 2853 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1046 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomRightMarginBox;
}
#line 2861 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1049 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
}
#line 2869 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1052 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftTopMarginBox;
}
#line 2877 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1055 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
}
#line 2885 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1058 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
}
#line 2893 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1061 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightTopMarginBox;
}
#line 2901 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1064 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
}
#line 2909 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1067 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightBottomMarginBox;
}
#line 2917 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1073 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
}
#line 2925 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1080 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createFontFaceRule();
}
#line 2933 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1083 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2942 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1087 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2951 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1140 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selectorList)) {
parser->setReusableRegionSelectorVector((yyvsp[0].selectorList));
(yyval.selectorList) = parser->reusableRegionSelectorVector();
}
else
(yyval.selectorList) = 0;
}
#line 2964 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1151 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
}
#line 2972 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1157 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-6].selectorList))
(yyval.rule) = parser->createRegionRule((yyvsp[-6].selectorList), (yyvsp[-1].ruleList));
else {
(yyval.rule) = 0;
parser->popRuleData();
}
}
#line 2985 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1185 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::DirectAdjacent; }
#line 2991 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1186 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::IndirectAdjacent; }
#line 2997 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1187 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::Child; }
#line 3003 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1191 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer); }
#line 3009 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1192 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 3015 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1196 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = -1; }
#line 3021 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1197 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 3027 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1201 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
}
#line 3035 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1207 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
parser->markSelectorStart();
}
#line 3044 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1214 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
}
#line 3052 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1220 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markSelectorEnd();
}
#line 3060 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1226 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createStyleRule((yyvsp[-7].selectorList));
}
#line 3068 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1232 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markSelectorStart();
}
#line 3076 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1237 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selector)) {
(yyval.selectorList) = parser->reusableSelectorVector();
(yyval.selectorList)->shrink(0);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
parser->updateLastSelectorLineAndPosition();
}
}
#line 3089 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1245 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-5].selectorList) && (yyvsp[0].selector)) {
(yyval.selectorList) = (yyvsp[-5].selectorList);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
parser->updateLastSelectorLineAndPosition();
} else
(yyval.selectorList) = 0;
}
#line 3102 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1253 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selectorList) = 0;
}
#line 3110 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1259 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[-1].selector);
}
#line 3118 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1265 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3126 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1269 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3134 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1273 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if (!(yyvsp[-1].selector))
(yyval.selector) = 0;
else if ((yyval.selector))
(yyval.selector)->appendTagHistory(CSSSelector::Descendant, parser->sinkFloatingSelector((yyvsp[-1].selector)));
}
#line 3146 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1280 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if (!(yyvsp[-2].selector))
(yyval.selector) = 0;
else if ((yyval.selector))
(yyval.selector)->appendTagHistory((yyvsp[-1].relation), parser->sinkFloatingSelector((yyvsp[-2].selector)));
}
#line 3158 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1287 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = 0;
}
#line 3166 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1293 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string).clear(); }
#line 3172 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1294 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { static LChar star = '*'; (yyval.string).init(&star, 1); }
#line 3178 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1295 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 3184 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1299 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[0].string), parser->m_defaultNamespace));
}
#line 3192 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1302 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName(nullAtom, (yyvsp[-1].string), (yyval.selector));
}
#line 3202 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1307 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithNamespaceIfNeeded((yyval.selector));
}
#line 3212 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1312 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(parser->determineNameInNamespace((yyvsp[-1].string), (yyvsp[0].string)));
}
#line 3220 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1315 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[-2].string), (yyvsp[-1].string), (yyval.selector));
}
#line 3230 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1320 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[-1].string), starAtom, (yyval.selector));
}
#line 3240 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1328 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selector)) {
(yyval.selectorList) = parser->createFloatingSelectorVector();
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
} else
(yyval.selectorList) = 0;
}
#line 3252 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1335 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-4].selectorList) && (yyvsp[0].selector)) {
(yyval.selectorList) = (yyvsp[-4].selectorList);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
} else
(yyval.selectorList) = 0;
}
#line 3264 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1342 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selectorList) = 0;
}
#line 3272 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1348 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserString& str = (yyvsp[0].string);
if (parser->m_context.isHTMLDocument)
str.lower();
(yyval.string) = str;
}
#line 3283 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1354 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
static LChar star = '*';
(yyval.string).init(&star, 1);
}
#line 3292 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1361 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3300 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1364 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (!(yyvsp[0].selector))
(yyval.selector) = 0;
else if ((yyvsp[-1].selector))
(yyval.selector) = parser->rewriteSpecifiers((yyvsp[-1].selector), (yyvsp[0].selector));
}
#line 3311 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1370 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = 0;
}
#line 3319 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1376 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
#line 3331 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1383 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].string)[0] >= '0' && (yyvsp[0].string)[0] <= '9') {
(yyval.selector) = 0;
} else {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
}
#line 3347 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1400 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Class);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
#line 3359 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1410 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 3367 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1416 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[-1].string), nullAtom), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch(CSSSelector::Set);
}
#line 3377 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1421 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[-5].string), nullAtom), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[-4].integer));
(yyval.selector)->setValue((yyvsp[-2].string));
}
#line 3388 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1427 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[-2].string), (yyvsp[-1].string)), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch(CSSSelector::Set);
}
#line 3398 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1432 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[-6].string), (yyvsp[-5].string)), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[-4].integer));
(yyval.selector)->setValue((yyvsp[-2].string));
}
#line 3409 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1441 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Exact;
}
#line 3417 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1444 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::List;
}
#line 3425 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1447 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Hyphen;
}
#line 3433 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1450 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Begin;
}
#line 3441 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1453 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::End;
}
#line 3449 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1456 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Contain;
}
#line 3457 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1467 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PagePseudoClass);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3471 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1478 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3485 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1487 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoElement);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));

CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3500 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1499 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].selectorList)) {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[-2].selectorList)));
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type != CSSSelector::PseudoCue)
(yyval.selector) = 0;
} else
(yyval.selector) = 0;
}
#line 3517 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1517 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].selectorList)) {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[-2].selectorList)));
(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type != CSSSelector::PseudoAny)
(yyval.selector) = 0;
} else
(yyval.selector) = 0;
}
#line 3535 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1531 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument((yyvsp[-2].string));
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3549 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1541 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument(String::number((yyvsp[-3].integer) * (yyvsp[-2].number)));
(yyval.selector)->setValue((yyvsp[-5].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3563 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1551 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument((yyvsp[-2].string));
(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
else if (type == CSSSelector::PseudoNthChild ||
type == CSSSelector::PseudoNthOfType ||
type == CSSSelector::PseudoNthLastChild ||
type == CSSSelector::PseudoNthLastOfType) {
if (!isValidNthToken((yyvsp[-2].string)))
(yyval.selector) = 0;
}
}
#line 3585 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1569 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (!(yyvsp[-2].selector) || !(yyvsp[-2].selector)->isSimple())
(yyval.selector) = 0;
else {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);

Vector<OwnPtr<CSSParserSelector> > selectorVector;
selectorVector.append(parser->sinkFloatingSelector((yyvsp[-2].selector)));
(yyval.selector)->adoptSelectorVector(selectorVector);

(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
}
}
#line 3605 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1587 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = false; }
#line 3611 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1588 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3619 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1591 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[-1].boolean);
if ( (yyvsp[0].boolean) )
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3629 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1596 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3637 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1599 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
}
#line 3645 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1602 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[-1].boolean);
}
#line 3653 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1608 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-2].boolean);
}
#line 3662 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1612 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = false;
}
#line 3671 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1616 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-3].boolean);
if ((yyvsp[-2].boolean))
(yyval.boolean) = (yyvsp[-2].boolean);
}
#line 3682 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1622 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-3].boolean);
}
#line 3691 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1629 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->syntaxError((yyvsp[-1].location), CSSParser::PropertyDeclarationError);
}
#line 3699 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1635 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





(yyval.boolean) = false;

}
#line 3713 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1645 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
bool isPropertyParsed = false;
if ((yyvsp[-4].id) && (yyvsp[-1].valueList)) {
parser->m_valueList = parser->sinkFloatingValueList((yyvsp[-1].valueList));
int oldParsedProperties = parser->m_parsedProperties.size();
(yyval.boolean) = parser->parseValue(static_cast<CSSPropertyID>((yyvsp[-4].id)), (yyvsp[0].boolean));
if (!(yyval.boolean))
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
else
isPropertyParsed = true;
parser->m_valueList = nullptr;
}
parser->markPropertyEnd((yyvsp[0].boolean), isPropertyParsed);
}
#line 3733 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1661 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
}
#line 3741 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1665 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

parser->markPropertyEnd(false, false);
(yyval.boolean) = false;
}
#line 3751 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1671 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

(yyval.boolean) = false;
}
#line 3760 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1676 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

parser->markPropertyEnd(false, false);
(yyval.boolean) = false;
}
#line 3770 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1684 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->syntaxError((yyvsp[-1].location));
}
#line 3778 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1690 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.id) = cssPropertyID((yyvsp[-1].string));
}
#line 3786 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1696 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = true; }
#line 3792 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1697 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = false; }
#line 3798 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1702 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.valueList) = 0; }
#line 3804 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1706 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 3813 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1710 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-2].valueList);
if ((yyval.valueList)) {
if ((yyvsp[-1].character)) {
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
}
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
}
#line 3831 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1730 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '/';
}
#line 3839 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1733 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = ',';
}
#line 3847 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1736 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = 0;
}
#line 3855 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1742 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[-1].value); }
#line 3861 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1743 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[-1].value); (yyval.value).fValue *= (yyvsp[-2].integer); }
#line 3867 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1744 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; }
#line 3873 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1745 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = cssValueKeywordID((yyvsp[-1].string));
(yyval.value).unit = CSSPrimitiveValue::CSS_IDENT;
(yyval.value).string = (yyvsp[-1].string);
}
#line 3883 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1751 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
#line 3889 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1752 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
#line 3895 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1753 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; }
#line 3901 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1754 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; }
#line 3907 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1755 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
#line 3913 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1756 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
#line 3919 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1757 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





}
#line 3931 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1765 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3939 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1768 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3947 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1771 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3955 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1774 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 
(yyval.value).id = CSSValueInvalid; (yyval.value).unit = 0;
}
#line 3963 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1780 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 3969 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1781 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 3975 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1782 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; }
#line 3981 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1783 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; }
#line 3987 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1784 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; }
#line 3993 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1785 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; }
#line 3999 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1786 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; }
#line 4005 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1787 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; }
#line 4011 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1788 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; }
#line 4017 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1789 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; }
#line 4023 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1790 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; }
#line 4029 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1791 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; }
#line 4035 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1792 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; }
#line 4041 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1793 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; }
#line 4047 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1794 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; }
#line 4053 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1795 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; }
#line 4059 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1796 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; }
#line 4065 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1797 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; }
#line 4071 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1798 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSParserValue::Q_EMS; }
#line 4077 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1799 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; }
#line 4083 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1800 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = CSSValueInvalid;
(yyval.value).fValue = (yyvsp[0].number);
(yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetUsesRemUnits(true);
}
#line 4095 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1807 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CHS; }
#line 4101 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1808 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VW; }
#line 4107 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1809 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VH; }
#line 4113 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1810 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMIN; }
#line 4119 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1811 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMAX; }
#line 4125 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1812 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPPX; }
#line 4131 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1813 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPI; }
#line 4137 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1814 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPCM; }
#line 4143 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1818 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = parser->sinkFloatingValueList((yyvsp[-1].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4156 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1826 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-2].string);
CSSParserValueList* valueList = parser->createFloatingValueList();
f->args = parser->sinkFloatingValueList(valueList);
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4170 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1835 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = nullptr;
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4183 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1846 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[0].value); }
#line 4189 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1847 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





}
#line 4201 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1854 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[0].value); (yyval.value).fValue *= (yyvsp[-1].integer); }
#line 4207 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1858 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '+';
}
#line 4215 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1861 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '-';
}
#line 4223 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1864 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '*';
}
#line 4231 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1867 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '/';
}
#line 4239 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1878 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = '(';
(yyval.valueList)->insertValueAt(0, v);
v.iValue = ')';
(yyval.valueList)->addValue(v);
} else
(yyval.valueList) = 0;
}
#line 4257 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1895 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.valueList) = 0; }
#line 4263 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1899 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 4272 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1903 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList) && (yyvsp[-1].character)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
} else
(yyval.valueList) = 0;

}
#line 4290 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1916 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList) && (yyvsp[-1].character) && (yyvsp[0].valueList)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
(yyval.valueList)->extend(*((yyvsp[0].valueList)));
} else 
(yyval.valueList) = 0;
}
#line 4307 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1932 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-1].valueList);
}
#line 4315 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1935 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-4].valueList) && (yyvsp[-1].valueList)) {
(yyval.valueList) = (yyvsp[-4].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = ',';
(yyval.valueList)->addValue(v);
(yyval.valueList)->extend(*((yyvsp[-1].valueList)));
} else
(yyval.valueList) = 0;
}
#line 4332 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1950 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-4].string);
f->args = parser->sinkFloatingValueList((yyvsp[-2].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4345 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1958 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
YYERROR;
}
#line 4353 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1965 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[0].string);
}
#line 4361 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1968 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[0].string);
}
#line 4369 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1974 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = parser->sinkFloatingValueList((yyvsp[-1].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4382 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1982 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
YYERROR;
}
#line 4390 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1990 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4398 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1993 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4406 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1999 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4414 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 2002 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4422 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 2008 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4430 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 2026 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->invalidBlockHit();
}
#line 4438 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2046 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.location) = parser->currentLocation();
}
#line 4446 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;


#line 4450 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
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
      yyerror (parser, YY_("syntax error"));
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
        yyerror (parser, yymsgp);
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
                      yytoken, &yylval, parser);
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
                  yystos[yystate], yyvsp, parser);
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
  yyerror (parser, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parser);
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
#line 2059 "generated/CSSGrammar.y" /* yacc.c:1906  */

