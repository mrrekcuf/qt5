%{

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

%}
 






















%pure_parser

%parse-param { CSSParser* parser }
%lex-param { CSSParser* parser }

%union {
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
}

%{

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

%}




%expect 31


%nonassoc LOWEST_PREC

%left UNIMPORTANT_TOK

%token WHITESPACE SGML_CD
%token TOKEN_EOF 0

%token INCLUDES
%token DASHMATCH
%token BEGINSWITH
%token ENDSWITH
%token CONTAINS

%token <string> STRING
%right <string> IDENT
%token <string> NTH

%nonassoc <string> HEX
%nonassoc <string> IDSEL
%nonassoc ':'
%nonassoc '.'
%nonassoc '['
%nonassoc <string> '*'
%nonassoc error
%left '|'

%token IMPORT_SYM
%token PAGE_SYM
%token MEDIA_SYM



%token FONT_FACE_SYM



%token CHARSET_SYM
%token NAMESPACE_SYM
%token VARFUNCTION
%token WEBKIT_RULE_SYM
%token WEBKIT_DECLS_SYM
%token WEBKIT_KEYFRAME_RULE_SYM
%token WEBKIT_KEYFRAMES_SYM
%token WEBKIT_VALUE_SYM
%token WEBKIT_MEDIAQUERY_SYM
%token WEBKIT_SELECTOR_SYM
%token WEBKIT_REGION_RULE_SYM
%token WEBKIT_VIEWPORT_RULE_SYM






%token <marginBox> TOPLEFTCORNER_SYM
%token <marginBox> TOPLEFT_SYM
%token <marginBox> TOPCENTER_SYM
%token <marginBox> TOPRIGHT_SYM
%token <marginBox> TOPRIGHTCORNER_SYM
%token <marginBox> BOTTOMLEFTCORNER_SYM
%token <marginBox> BOTTOMLEFT_SYM
%token <marginBox> BOTTOMCENTER_SYM
%token <marginBox> BOTTOMRIGHT_SYM
%token <marginBox> BOTTOMRIGHTCORNER_SYM
%token <marginBox> LEFTTOP_SYM
%token <marginBox> LEFTMIDDLE_SYM
%token <marginBox> LEFTBOTTOM_SYM
%token <marginBox> RIGHTTOP_SYM
%token <marginBox> RIGHTMIDDLE_SYM
%token <marginBox> RIGHTBOTTOM_SYM

%token ATKEYWORD

%token IMPORTANT_SYM
%token MEDIA_ONLY
%token MEDIA_NOT
%token MEDIA_AND






%token <number> REMS
%token <number> CHS
%token <number> QEMS
%token <number> EMS
%token <number> EXS
%token <number> PXS
%token <number> CMS
%token <number> MMS
%token <number> INS
%token <number> PTS
%token <number> PCS
%token <number> DEGS
%token <number> RADS
%token <number> GRADS
%token <number> TURNS
%token <number> MSECS
%token <number> SECS
%token <number> HERTZ
%token <number> KHERTZ
%token <string> DIMEN
%token <string> INVALIDDIMEN
%token <number> PERCENTAGE
%token <number> FLOATTOKEN
%token <number> INTEGER
%token <number> VW
%token <number> VH
%token <number> VMIN
%token <number> VMAX
%token <number> DPPX
%token <number> DPI
%token <number> DPCM

%token <string> URI
%token <string> FUNCTION
%token <string> ANYFUNCTION

%token <string> CUEFUNCTION

%token <string> NOTFUNCTION
%token <string> CALCFUNCTION
%token <string> MINFUNCTION
%token <string> MAXFUNCTION
%token <string> VAR_DEFINITION

%token <string> UNICODERANGE

%type <relation> combinator

%type <rule> charset
%type <rule> ignored_charset
%type <rule> ruleset
%type <rule> media
%type <rule> import
%type <rule> namespace
%type <rule> page
%type <rule> margin_box
%type <rule> font_face



%type <rule> keyframes
%type <rule> invalid_rule
%type <rule> save_block
%type <rule> invalid_at
%type <rule> rule
%type <rule> valid_rule
%type <ruleList> block_rule_list 
%type <ruleList> region_block_rule_list
%type <rule> block_rule
%type <rule> block_valid_rule
%type <rule> region










%type <string> maybe_ns_prefix

%type <string> namespace_selector

%type <string> string_or_uri
%type <string> ident_or_string
%type <string> medium
%type <marginBox> margin_sym

%type <string> media_feature
%type <mediaList> media_list
%type <mediaList> maybe_media_list
%type <mediaQuery> media_query
%type <mediaQueryRestrictor> maybe_media_restrictor
%type <valueList> maybe_media_value
%type <mediaQueryExp> media_query_exp
%type <mediaQueryExpList> media_query_exp_list
%type <mediaQueryExpList> maybe_and_media_query_exp_list











%type <string> keyframe_name
%type <keyframe> keyframe_rule
%type <keyframeRuleList> keyframes_rule
%type <valueList> key_list
%type <value> key

%type <id> property

%type <selector> specifier
%type <selector> specifier_list
%type <selector> simple_selector
%type <selector> selector
%type <selectorList> selector_list
%type <selectorList> simple_selector_list
%type <selectorList> region_selector
%type <selector> selector_with_trailing_whitespace
%type <selector> class
%type <selector> attrib
%type <selector> pseudo
%type <selector> pseudo_page
%type <selector> page_selector

%type <boolean> declaration_list
%type <boolean> decl_list
%type <boolean> declaration
%type <boolean> declarations_and_margins

%type <boolean> prio

%type <integer> match
%type <integer> unary_operator
%type <integer> maybe_unary_operator
%type <character> operator

%type <valueList> expr
%type <valueList> valid_expr
%type <value> term
%type <value> unary_term
%type <value> function
%type <value> calc_func_term
%type <character> calc_func_operator
%type <valueList> calc_func_expr
%type <valueList> valid_calc_func_expr
%type <valueList> calc_func_expr_list
%type <valueList> calc_func_paren_expr
%type <value> calc_function
%type <string> min_or_max
%type <value> min_or_max_function

%type <string> element_name
%type <string> attr_name

%type <location> error_location

%%

stylesheet:
maybe_space maybe_charset maybe_sgml rule_list
| webkit_rule maybe_space
| webkit_decls maybe_space
| webkit_value maybe_space
| webkit_mediaquery maybe_space
| webkit_selector maybe_space
| webkit_keyframe_rule maybe_space



;

webkit_rule:
WEBKIT_RULE_SYM '{' maybe_space valid_rule maybe_space '}' {
parser->m_rule = $4;
}
;

webkit_keyframe_rule:
WEBKIT_KEYFRAME_RULE_SYM '{' maybe_space keyframe_rule maybe_space '}' {
parser->m_keyframe = $4;
}
;

webkit_decls:
WEBKIT_DECLS_SYM '{' maybe_space_before_declaration declaration_list '}' { 

}
;

webkit_value:
WEBKIT_VALUE_SYM '{' maybe_space expr '}' {
if ($4) {
parser->m_valueList = parser->sinkFloatingValueList($4);
int oldParsedProperties = parser->m_parsedProperties.size();
if (!parser->parseValue(parser->m_id, parser->m_important))
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
parser->m_valueList = nullptr;
}
}
;

webkit_mediaquery:
WEBKIT_MEDIAQUERY_SYM WHITESPACE maybe_space media_query '}' {
parser->m_mediaQuery = parser->sinkFloatingMediaQuery($4);
}
;

webkit_selector:
WEBKIT_SELECTOR_SYM '{' maybe_space selector_list '}' {
if ($4) {
if (parser->m_selectorListForParseSelector)
parser->m_selectorListForParseSelector->adoptSelectorVector(*$4);
}
}
;









maybe_space: 
%prec UNIMPORTANT_TOK
| maybe_space WHITESPACE
;

maybe_sgml: 

| maybe_sgml SGML_CD
| maybe_sgml WHITESPACE
;

maybe_charset: 

| charset {
}
;

closing_brace:
'}'
| %prec LOWEST_PREC TOKEN_EOF
;

closing_parenthesis:
')'
| %prec LOWEST_PREC TOKEN_EOF
;

charset:
CHARSET_SYM maybe_space STRING maybe_space ';' {
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetEncodingFromCharsetRule($3);
if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
$$ = 0;
}
| CHARSET_SYM error invalid_block {
}
| CHARSET_SYM error ';' {
}
;

ignored_charset:
CHARSET_SYM maybe_space STRING maybe_space ';' {

$$ = 0;
}
| CHARSET_SYM maybe_space ';' {
$$ = 0;
}
;

rule_list: 

| rule_list rule maybe_sgml {
if ($2 && parser->m_styleSheet)
parser->m_styleSheet->parserAppendRule($2);
}
;

valid_rule:
ruleset
| media
| page
| font_face
| keyframes
| namespace
| import
| region












;

rule:
valid_rule {
parser->m_hadSyntacticallyValidCSSRule = true;
}
| ignored_charset
| invalid_rule
| invalid_at
;

block_rule_list: 
{ $$ = 0; }
| block_rule_list block_rule maybe_sgml {
$$ = $1;
if ($2) {
if (!$$)
$$ = parser->createRuleList();
$$->append($2);
}
}
;

region_block_rule_list: 
{ $$ = 0; }
| region_block_rule_list block_valid_rule maybe_sgml {
$$ = $1;
if ($2) {
if (!$$)
$$ = parser->createRuleList();
$$->append($2);
}
}
;

block_valid_rule:
ruleset
| page
| font_face
| media
| keyframes









;

block_rule:
block_valid_rule
| invalid_rule
| invalid_at
| namespace
| import
| region
;

at_import_header_end_maybe_space:
maybe_space {
parser->markRuleHeaderEnd();
parser->markRuleBodyStart();
}
;

before_import_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
}
;

import:
before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list ';' {
$$ = parser->createImportRule($4, $6);
}
| before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list TOKEN_EOF {
$$ = parser->createImportRule($4, $6);
}
| before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list invalid_block {
$$ = 0;
parser->popRuleData();
}
| before_import_rule IMPORT_SYM error ';' {
$$ = 0;
parser->popRuleData();
}
| before_import_rule IMPORT_SYM error invalid_block {
$$ = 0;
parser->popRuleData();
}
;

namespace:
NAMESPACE_SYM maybe_space maybe_ns_prefix string_or_uri maybe_space ';' {
parser->addNamespace($3, $4);
$$ = 0;
}
| NAMESPACE_SYM maybe_space maybe_ns_prefix string_or_uri maybe_space invalid_block {
$$ = 0;
}
| NAMESPACE_SYM error invalid_block {
$$ = 0;
}
| NAMESPACE_SYM error ';' {
$$ = 0;
}
;

maybe_ns_prefix: 
{ $$.clear(); }
| IDENT maybe_space { $$ = $1; }
;

string_or_uri:
STRING
| URI
;

media_feature:
IDENT maybe_space {
$$ = $1;
}
;

maybe_media_value: 
{
$$ = 0;
}
| ':' maybe_space expr maybe_space {
$$ = $3;
}
;

media_query_exp:
maybe_media_restrictor maybe_space '(' maybe_space media_feature maybe_space maybe_media_value ')' maybe_space {


if ($1 != MediaQuery::None)
$$ = parser->createFloatingMediaQueryExp("", 0);
else {
$5.lower();
$$ = parser->createFloatingMediaQueryExp($5, $7);
}
}
;

media_query_exp_list:
media_query_exp {
$$ = parser->createFloatingMediaQueryExpList();
$$->append(parser->sinkFloatingMediaQueryExp($1));
}
| media_query_exp_list maybe_space MEDIA_AND maybe_space media_query_exp {
$$ = $1;
$$->append(parser->sinkFloatingMediaQueryExp($5));
}
;

maybe_and_media_query_exp_list: 
{
$$ = parser->createFloatingMediaQueryExpList();
}
| MEDIA_AND maybe_space media_query_exp_list {
$$ = $3;
}
;

maybe_media_restrictor: 
{
$$ = MediaQuery::None;
}
| MEDIA_ONLY {
$$ = MediaQuery::Only;
}
| MEDIA_NOT {
$$ = MediaQuery::Not;
}
;

media_query:
media_query_exp_list {
$$ = parser->createFloatingMediaQuery(parser->sinkFloatingMediaQueryExpList($1));
}
|
maybe_media_restrictor maybe_space medium maybe_and_media_query_exp_list {
$3.lower();
$$ = parser->createFloatingMediaQuery($1, $3, parser->sinkFloatingMediaQueryExpList($4));
}
;

maybe_media_list: 
{
$$ = parser->createMediaQuerySet();
}
| media_list
;

media_list:
media_query {
$$ = parser->createMediaQuerySet();
$$->addMediaQuery(parser->sinkFloatingMediaQuery($1));
parser->updateLastMediaLine($$);
}
| media_list ',' maybe_space media_query {
$$ = $1;
if ($$) {
$$->addMediaQuery(parser->sinkFloatingMediaQuery($4));
parser->updateLastMediaLine($$);
}
}
| media_list error {
$$ = 0;
}
;

at_rule_body_start: 
{
parser->markRuleBodyStart();
}
;

before_media_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
}
;

at_rule_header_end_maybe_space:
maybe_space {
parser->markRuleHeaderEnd();
}
;

media:
before_media_rule MEDIA_SYM maybe_space media_list at_rule_header_end '{' at_rule_body_start maybe_space block_rule_list save_block {
$$ = parser->createMediaRule($4, $9);
}
| before_media_rule MEDIA_SYM at_rule_header_end_maybe_space '{' at_rule_body_start maybe_space block_rule_list save_block {
$$ = parser->createEmptyMediaRule($7);
}
| before_media_rule MEDIA_SYM at_rule_header_end_maybe_space ';' {
$$ = 0;
parser->popRuleData();
}
;

medium:
IDENT maybe_space {
$$ = $1;
}
;
























































































before_keyframes_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
}
;

keyframes:
before_keyframes_rule WEBKIT_KEYFRAMES_SYM maybe_space keyframe_name at_rule_header_end_maybe_space '{' at_rule_body_start maybe_space keyframes_rule closing_brace {
$$ = parser->createKeyframesRule($4, parser->sinkFloatingKeyframeVector($9));
}
;

keyframe_name:
IDENT
| STRING
;

keyframes_rule: 
{ $$ = parser->createFloatingKeyframeVector(); }
| keyframes_rule keyframe_rule maybe_space {
$$ = $1;
if ($2)
$$->append($2);
}
;

keyframe_rule:
key_list maybe_space '{' maybe_space declaration_list closing_brace {
$$ = parser->createKeyframe($1);
}
;

key_list:
key {
$$ = parser->createFloatingValueList();
$$->addValue(parser->sinkFloatingValue($1));
}
| key_list maybe_space ',' maybe_space key {
$$ = $1;
if ($$)
$$->addValue(parser->sinkFloatingValue($5));
}
;

key:
maybe_unary_operator PERCENTAGE { $$.id = CSSValueInvalid; $$.isInt = false; $$.fValue = $1 * $2; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
| IDENT {
$$.id = CSSValueInvalid; $$.isInt = false; $$.unit = CSSPrimitiveValue::CSS_NUMBER;
CSSParserString& str = $1;
if (str.equalIgnoringCase("from"))
$$.fValue = 0;
else if (str.equalIgnoringCase("to"))
$$.fValue = 100;
else {
$$.unit = 0;
YYERROR;
}
}
| error {
$$.unit = 0;
}
;

before_page_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
}
;

page:
before_page_rule PAGE_SYM maybe_space page_selector at_rule_header_end_maybe_space
'{' at_rule_body_start maybe_space_before_declaration declarations_and_margins closing_brace {
if ($4)
$$ = parser->createPageRule(parser->sinkFloatingSelector($4));
else {

parser->clearProperties();

$$ = 0;
parser->popRuleData();
}
}
| before_page_rule PAGE_SYM error invalid_block {
parser->popRuleData();
$$ = 0;
}
| before_page_rule PAGE_SYM error ';' {
parser->popRuleData();
$$ = 0;
}
;

page_selector:
IDENT {
$$ = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
$$->setForPage();
}
| IDENT pseudo_page {
$$ = $2;
if ($$) {
$$->prependTagSelector(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
$$->setForPage();
}
}
| pseudo_page {
$$ = $1;
if ($$)
$$->setForPage();
}
| {
$$ = parser->createFloatingSelector();
$$->setForPage();
}
;

declarations_and_margins:
declaration_list
| declarations_and_margins margin_box maybe_space declaration_list
;

margin_box:
margin_sym {
parser->startDeclarationsForMarginBox();
} maybe_space '{' maybe_space declaration_list closing_brace {
$$ = parser->createMarginAtRule($1);
}
;

margin_sym :
TOPLEFTCORNER_SYM {
$$ = CSSSelector::TopLeftCornerMarginBox;
}
| TOPLEFT_SYM {
$$ = CSSSelector::TopLeftMarginBox;
}
| TOPCENTER_SYM {
$$ = CSSSelector::TopCenterMarginBox;
}
| TOPRIGHT_SYM {
$$ = CSSSelector::TopRightMarginBox;
}
| TOPRIGHTCORNER_SYM {
$$ = CSSSelector::TopRightCornerMarginBox;
}
| BOTTOMLEFTCORNER_SYM {
$$ = CSSSelector::BottomLeftCornerMarginBox;
}
| BOTTOMLEFT_SYM {
$$ = CSSSelector::BottomLeftMarginBox;
}
| BOTTOMCENTER_SYM {
$$ = CSSSelector::BottomCenterMarginBox;
}
| BOTTOMRIGHT_SYM {
$$ = CSSSelector::BottomRightMarginBox;
}
| BOTTOMRIGHTCORNER_SYM {
$$ = CSSSelector::BottomRightCornerMarginBox;
}
| LEFTTOP_SYM {
$$ = CSSSelector::LeftTopMarginBox;
}
| LEFTMIDDLE_SYM {
$$ = CSSSelector::LeftMiddleMarginBox;
}
| LEFTBOTTOM_SYM {
$$ = CSSSelector::LeftBottomMarginBox;
}
| RIGHTTOP_SYM {
$$ = CSSSelector::RightTopMarginBox;
}
| RIGHTMIDDLE_SYM {
$$ = CSSSelector::RightMiddleMarginBox;
}
| RIGHTBOTTOM_SYM {
$$ = CSSSelector::RightBottomMarginBox;
}
;

before_font_face_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
}
;

font_face:
before_font_face_rule FONT_FACE_SYM at_rule_header_end_maybe_space
'{' at_rule_body_start maybe_space_before_declaration declaration_list closing_brace {
$$ = parser->createFontFaceRule();
}
| before_font_face_rule FONT_FACE_SYM error invalid_block {
$$ = 0;
parser->popRuleData();
}
| before_font_face_rule FONT_FACE_SYM error ';' {
$$ = 0;
parser->popRuleData();
}
;















































region_selector:
selector_list {
if ($1) {
parser->setReusableRegionSelectorVector($1);
$$ = parser->reusableRegionSelectorVector();
}
else
$$ = 0;
}
;

before_region_rule: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
}
;

region:
before_region_rule WEBKIT_REGION_RULE_SYM WHITESPACE region_selector at_rule_header_end '{' at_rule_body_start maybe_space region_block_rule_list save_block {
if ($4)
$$ = parser->createRegionRule($4, $9);
else {
$$ = 0;
parser->popRuleData();
}
}
;


















combinator:
'+' maybe_space { $$ = CSSSelector::DirectAdjacent; }
| '~' maybe_space { $$ = CSSSelector::IndirectAdjacent; }
| '>' maybe_space { $$ = CSSSelector::Child; }
;

maybe_unary_operator:
unary_operator { $$ = $1; }
| { $$ = 1; }
;

unary_operator:
'-' { $$ = -1; }
| '+' { $$ = 1; }
;

maybe_space_before_declaration:
maybe_space {
parser->markPropertyStart();
}
;

before_selector_list: 
{
parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
parser->markSelectorStart();
}
;

at_rule_header_end: 
{
parser->markRuleHeaderEnd();
}
;

at_selector_end: 
{
parser->markSelectorEnd();
}
;

ruleset:
before_selector_list selector_list at_selector_end at_rule_header_end '{' at_rule_body_start maybe_space_before_declaration declaration_list closing_brace {
$$ = parser->createStyleRule($2);
}
;

before_selector_group_item: 
{
parser->markSelectorStart();
}

selector_list:
selector %prec UNIMPORTANT_TOK {
if ($1) {
$$ = parser->reusableSelectorVector();
$$->shrink(0);
$$->append(parser->sinkFloatingSelector($1));
parser->updateLastSelectorLineAndPosition();
}
}
| selector_list at_selector_end ',' maybe_space before_selector_group_item selector %prec UNIMPORTANT_TOK {
if ($1 && $6) {
$$ = $1;
$$->append(parser->sinkFloatingSelector($6));
parser->updateLastSelectorLineAndPosition();
} else
$$ = 0;
}
| selector_list error {
$$ = 0;
}
;

selector_with_trailing_whitespace:
selector WHITESPACE {
$$ = $1;
}
;

selector:
simple_selector {
$$ = $1;
}
| selector_with_trailing_whitespace
{
$$ = $1;
}
| selector_with_trailing_whitespace simple_selector
{
$$ = $2;
if (!$1)
$$ = 0;
else if ($$)
$$->appendTagHistory(CSSSelector::Descendant, parser->sinkFloatingSelector($1));
}
| selector combinator simple_selector {
$$ = $3;
if (!$1)
$$ = 0;
else if ($$)
$$->appendTagHistory($2, parser->sinkFloatingSelector($1));
}
| selector error {
$$ = 0;
}
;

namespace_selector: 
'|' { $$.clear(); }
| '*' '|' { static LChar star = '*'; $$.init(&star, 1); }
| IDENT '|' { $$ = $1; }
;

simple_selector:
element_name {
$$ = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
}
| element_name specifier_list {
$$ = $2;
if ($$)
$$ = parser->rewriteSpecifiersWithElementName(nullAtom, $1, $$);
}
| specifier_list {
$$ = $1;
if ($$)
$$ = parser->rewriteSpecifiersWithNamespaceIfNeeded($$);
}
| namespace_selector element_name {
$$ = parser->createFloatingSelectorWithTagName(parser->determineNameInNamespace($1, $2));
}
| namespace_selector element_name specifier_list {
$$ = $3;
if ($$)
$$ = parser->rewriteSpecifiersWithElementName($1, $2, $$);
}
| namespace_selector specifier_list {
$$ = $2;
if ($$)
$$ = parser->rewriteSpecifiersWithElementName($1, starAtom, $$);
}
;

simple_selector_list:
simple_selector %prec UNIMPORTANT_TOK {
if ($1) {
$$ = parser->createFloatingSelectorVector();
$$->append(parser->sinkFloatingSelector($1));
} else
$$ = 0;
}
| simple_selector_list maybe_space ',' maybe_space simple_selector %prec UNIMPORTANT_TOK {
if ($1 && $5) {
$$ = $1;
$$->append(parser->sinkFloatingSelector($5));
} else
$$ = 0;
}
| simple_selector_list error {
$$ = 0;
}
;

element_name:
IDENT {
CSSParserString& str = $1;
if (parser->m_context.isHTMLDocument)
str.lower();
$$ = str;
}
| '*' {
static LChar star = '*';
$$.init(&star, 1);
}
;

specifier_list:
specifier {
$$ = $1;
}
| specifier_list specifier {
if (!$2)
$$ = 0;
else if ($1)
$$ = parser->rewriteSpecifiers($1, $2);
}
| specifier_list error {
$$ = 0;
}
;

specifier:
IDSEL {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
$1.lower();
$$->setValue($1);
}
| HEX {
if ($1[0] >= '0' && $1[0] <= '9') {
$$ = 0;
} else {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
$1.lower();
$$->setValue($1);
}
}
| class
| attrib
| pseudo
;

class:
'.' IDENT {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::Class);
if (parser->m_context.mode == CSSQuirksMode)
$2.lower();
$$->setValue($2);
}
;

attr_name:
IDENT maybe_space {
$$ = $1;
}
;

attrib:
'[' maybe_space attr_name ']' {
$$ = parser->createFloatingSelector();
$$->setAttribute(QualifiedName(nullAtom, $3, nullAtom), parser->m_context.isHTMLDocument);
$$->setMatch(CSSSelector::Set);
}
| '[' maybe_space attr_name match maybe_space ident_or_string maybe_space ']' {
$$ = parser->createFloatingSelector();
$$->setAttribute(QualifiedName(nullAtom, $3, nullAtom), parser->m_context.isHTMLDocument);
$$->setMatch((CSSSelector::Match)$4);
$$->setValue($6);
}
| '[' maybe_space namespace_selector attr_name ']' {
$$ = parser->createFloatingSelector();
$$->setAttribute(parser->determineNameInNamespace($3, $4), parser->m_context.isHTMLDocument);
$$->setMatch(CSSSelector::Set);
}
| '[' maybe_space namespace_selector attr_name match maybe_space ident_or_string maybe_space ']' {
$$ = parser->createFloatingSelector();
$$->setAttribute(parser->determineNameInNamespace($3, $4), parser->m_context.isHTMLDocument);
$$->setMatch((CSSSelector::Match)$5);
$$->setValue($7);
}
;

match:
'=' {
$$ = CSSSelector::Exact;
}
| INCLUDES {
$$ = CSSSelector::List;
}
| DASHMATCH {
$$ = CSSSelector::Hyphen;
}
| BEGINSWITH {
$$ = CSSSelector::Begin;
}
| ENDSWITH {
$$ = CSSSelector::End;
}
| CONTAINS {
$$ = CSSSelector::Contain;
}
;

ident_or_string:
IDENT
| STRING
;

pseudo_page:
':' IDENT {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PagePseudoClass);
$2.lower();
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
}

pseudo:
':' IDENT {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$2.lower();
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
}
| ':' ':' IDENT {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoElement);
$3.lower();
$$->setValue($3);

CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
}


| ':' ':' CUEFUNCTION maybe_space simple_selector_list maybe_space ')' {
if ($5) {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$$->adoptSelectorVector(*parser->sinkFloatingSelectorVector($5));
$$->setValue($3);
CSSSelector::PseudoType type = $$->pseudoType();
if (type != CSSSelector::PseudoCue)
$$ = 0;
} else
$$ = 0;
}






| ':' ANYFUNCTION maybe_space simple_selector_list maybe_space ')' {
if ($4) {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$$->adoptSelectorVector(*parser->sinkFloatingSelectorVector($4));
$2.lower();
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type != CSSSelector::PseudoAny)
$$ = 0;
} else
$$ = 0;
}

| ':' FUNCTION maybe_space NTH maybe_space ')' {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$$->setArgument($4);
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
}

| ':' FUNCTION maybe_space maybe_unary_operator INTEGER maybe_space ')' {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$$->setArgument(String::number($4 * $5));
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
}

| ':' FUNCTION maybe_space IDENT maybe_space ')' {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);
$$->setArgument($4);
$2.lower();
$$->setValue($2);
CSSSelector::PseudoType type = $$->pseudoType();
if (type == CSSSelector::PseudoUnknown)
$$ = 0;
else if (type == CSSSelector::PseudoNthChild ||
type == CSSSelector::PseudoNthOfType ||
type == CSSSelector::PseudoNthLastChild ||
type == CSSSelector::PseudoNthLastOfType) {
if (!isValidNthToken($4))
$$ = 0;
}
}

| ':' NOTFUNCTION maybe_space simple_selector maybe_space ')' {
if (!$4 || !$4->isSimple())
$$ = 0;
else {
$$ = parser->createFloatingSelector();
$$->setMatch(CSSSelector::PseudoClass);

Vector<OwnPtr<CSSParserSelector> > selectorVector;
selectorVector.append(parser->sinkFloatingSelector($4));
$$->adoptSelectorVector(selectorVector);

$2.lower();
$$->setValue($2);
}
}
;

declaration_list: 
{ $$ = false; }
| declaration {
$$ = $1;
}
| decl_list declaration {
$$ = $1;
if ( $2 )
$$ = $2;
}
| decl_list {
$$ = $1;
}
| decl_list_recovery {
$$ = false;
}
| decl_list decl_list_recovery {
$$ = $1;
}
;

decl_list:
declaration ';' maybe_space {
parser->markPropertyStart();
$$ = $1;
}
| decl_list_recovery ';' maybe_space {
parser->markPropertyStart();
$$ = false;
}
| decl_list declaration ';' maybe_space {
parser->markPropertyStart();
$$ = $1;
if ($2)
$$ = $2;
}
| decl_list decl_list_recovery ';' maybe_space {
parser->markPropertyStart();
$$ = $1;
}
;

decl_list_recovery:
error error_location error_recovery {
parser->syntaxError($2, CSSParser::PropertyDeclarationError);
}
;

declaration:
VAR_DEFINITION maybe_space ':' maybe_space expr prio {





$$ = false;

}
|
property ':' maybe_space expr prio {
$$ = false;
bool isPropertyParsed = false;
if ($1 && $4) {
parser->m_valueList = parser->sinkFloatingValueList($4);
int oldParsedProperties = parser->m_parsedProperties.size();
$$ = parser->parseValue(static_cast<CSSPropertyID>($1), $5);
if (!$$)
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
else
isPropertyParsed = true;
parser->m_valueList = nullptr;
}
parser->markPropertyEnd($5, isPropertyParsed);
}
|
property declaration_recovery {
$$ = false;
}
|
property ':' maybe_space expr prio declaration_recovery { 

parser->markPropertyEnd(false, false);
$$ = false;
}
|
IMPORTANT_SYM maybe_space declaration_recovery { 

$$ = false;
}
|
property ':' maybe_space declaration_recovery { 

parser->markPropertyEnd(false, false);
$$ = false;
}
;

declaration_recovery:
error error_location error_recovery {
parser->syntaxError($2);
}
;

property:
IDENT maybe_space {
$$ = cssPropertyID($1);
}
;

prio:
IMPORTANT_SYM maybe_space { $$ = true; }
| { $$ = false; }
;

expr:
valid_expr
| valid_expr expr_recovery { $$ = 0; }
;

valid_expr:
term {
$$ = parser->createFloatingValueList();
$$->addValue(parser->sinkFloatingValue($1));
}
| valid_expr operator term {
$$ = $1;
if ($$) {
if ($2) {
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = $2;
$$->addValue(v);
}
$$->addValue(parser->sinkFloatingValue($3));
}
}
;

expr_recovery:
error error_location error_recovery
;

operator:
'/' maybe_space {
$$ = '/';
}
| ',' maybe_space {
$$ = ',';
}
| {
$$ = 0;
}
;

term:
unary_term maybe_space { $$ = $1; }
| unary_operator unary_term maybe_space { $$ = $2; $$.fValue *= $1; }
| STRING maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_STRING; }
| IDENT maybe_space {
$$.id = cssValueKeywordID($1);
$$.unit = CSSPrimitiveValue::CSS_IDENT;
$$.string = $1;
} 

| DIMEN maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_DIMENSION; }
| unary_operator DIMEN maybe_space { $$.id = CSSValueInvalid; $$.string = $2; $$.unit = CSSPrimitiveValue::CSS_DIMENSION; }
| URI maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_URI; }
| UNICODERANGE maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; }
| HEX maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
| '#' maybe_space { $$.id = CSSValueInvalid; $$.string = CSSParserString(); $$.unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; } 
| VARFUNCTION maybe_space IDENT closing_parenthesis maybe_space {





} 

| function maybe_space {
$$ = $1;
}
| calc_function maybe_space {
$$ = $1;
}
| min_or_max_function maybe_space {
$$ = $1;
}
| '%' maybe_space { 
$$.id = CSSValueInvalid; $$.unit = 0;
}
;

unary_term:
INTEGER { $$.id = CSSValueInvalid; $$.isInt = true; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
| FLOATTOKEN { $$.id = CSSValueInvalid; $$.isInt = false; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
| PERCENTAGE { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PERCENTAGE; }
| PXS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PX; }
| CMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_CM; }
| MMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_MM; }
| INS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_IN; }
| PTS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PT; }
| PCS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PC; }
| DEGS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DEG; }
| RADS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_RAD; }
| GRADS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_GRAD; }
| TURNS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_TURN; }
| MSECS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_MS; }
| SECS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_S; }
| HERTZ { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_HZ; }
| KHERTZ { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_KHZ; }
| EMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_EMS; }
| QEMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSParserValue::Q_EMS; }
| EXS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_EXS; }
| REMS {
$$.id = CSSValueInvalid;
$$.fValue = $1;
$$.unit = CSSPrimitiveValue::CSS_REMS;
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetUsesRemUnits(true);
}
| CHS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_CHS; }
| VW { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VW; }
| VH { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VH; }
| VMIN { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VMIN; }
| VMAX { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VMAX; }
| DPPX { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPPX; }
| DPI { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPI; }
| DPCM { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPCM; }
;

function:
FUNCTION maybe_space expr closing_parenthesis {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = $1;
f->args = parser->sinkFloatingValueList($3);
$$.id = CSSValueInvalid;
$$.unit = CSSParserValue::Function;
$$.function = f;
} |
FUNCTION maybe_space closing_parenthesis {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = $1;
CSSParserValueList* valueList = parser->createFloatingValueList();
f->args = parser->sinkFloatingValueList(valueList);
$$.id = CSSValueInvalid;
$$.unit = CSSParserValue::Function;
$$.function = f;
} |
FUNCTION maybe_space expr_recovery closing_parenthesis {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = $1;
f->args = nullptr;
$$.id = CSSValueInvalid;
$$.unit = CSSParserValue::Function;
$$.function = f;
}
;

calc_func_term:
unary_term { $$ = $1; }
| VARFUNCTION maybe_space IDENT closing_parenthesis {





}
| unary_operator unary_term { $$ = $2; $$.fValue *= $1; }
;

calc_func_operator:
WHITESPACE '+' WHITESPACE {
$$ = '+';
}
| WHITESPACE '-' WHITESPACE {
$$ = '-';
}
| calc_maybe_space '*' maybe_space {
$$ = '*';
}
| calc_maybe_space '/' maybe_space {
$$ = '/';
}
;

calc_maybe_space: 

| WHITESPACE
;

calc_func_paren_expr:
'(' maybe_space calc_func_expr calc_maybe_space closing_parenthesis {
if ($3) {
$$ = $3;
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = '(';
$$->insertValueAt(0, v);
v.iValue = ')';
$$->addValue(v);
} else
$$ = 0;
}
;

calc_func_expr:
valid_calc_func_expr
| valid_calc_func_expr expr_recovery { $$ = 0; }
;

valid_calc_func_expr:
calc_func_term {
$$ = parser->createFloatingValueList();
$$->addValue(parser->sinkFloatingValue($1));
}
| calc_func_expr calc_func_operator calc_func_term {
if ($1 && $2) {
$$ = $1;
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = $2;
$$->addValue(v);
$$->addValue(parser->sinkFloatingValue($3));
} else
$$ = 0;

}
| calc_func_expr calc_func_operator calc_func_paren_expr {
if ($1 && $2 && $3) {
$$ = $1;
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = $2;
$$->addValue(v);
$$->extend(*($3));
} else 
$$ = 0;
}
| calc_func_paren_expr
;

calc_func_expr_list:
calc_func_expr calc_maybe_space {
$$ = $1;
}
| calc_func_expr_list ',' maybe_space calc_func_expr calc_maybe_space {
if ($1 && $4) {
$$ = $1;
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = ',';
$$->addValue(v);
$$->extend(*($4));
} else
$$ = 0;
}
;

calc_function:
CALCFUNCTION maybe_space calc_func_expr calc_maybe_space closing_parenthesis {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = $1;
f->args = parser->sinkFloatingValueList($3);
$$.id = CSSValueInvalid;
$$.unit = CSSParserValue::Function;
$$.function = f;
}
| CALCFUNCTION maybe_space expr_recovery closing_parenthesis {
YYERROR;
}
;


min_or_max:
MINFUNCTION {
$$ = $1;
}
| MAXFUNCTION {
$$ = $1;
}
;

min_or_max_function:
min_or_max maybe_space calc_func_expr_list closing_parenthesis {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = $1;
f->args = parser->sinkFloatingValueList($3);
$$.id = CSSValueInvalid;
$$.unit = CSSParserValue::Function;
$$.function = f;
} 
| min_or_max maybe_space expr_recovery closing_parenthesis {
YYERROR;
}
; 



save_block:
closing_brace {
$$ = 0;
}
| error closing_brace {
$$ = 0;
}
;

invalid_at:
ATKEYWORD error invalid_block {
$$ = 0;
}
| ATKEYWORD error ';' {
$$ = 0;
}
;

invalid_rule:
error invalid_block {
$$ = 0;
} 












;

invalid_block:
'{' error_recovery closing_brace {
parser->invalidBlockHit();
}
;

invalid_square_brackets_block:
'[' error_recovery ']'
| '[' error_recovery TOKEN_EOF
;

invalid_parentheses_block:
opening_parenthesis error_recovery closing_parenthesis;

opening_parenthesis:
'(' | FUNCTION | CALCFUNCTION | VARFUNCTION | MINFUNCTION | MAXFUNCTION | ANYFUNCTION | NOTFUNCTION

| CUEFUNCTION

;

error_location: {
$$ = parser->currentLocation();
}
;

error_recovery: 

| error_recovery error
| error_recovery invalid_block
| error_recovery invalid_square_brackets_block
| error_recovery invalid_parentheses_block
;

%%
