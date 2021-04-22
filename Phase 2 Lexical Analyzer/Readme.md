###PROJECT MEMBERS###
StdID | Name
------------ | -------------
**60790** | **Syed Muhammad Tanzeel** <!--this is the group leader in bold-->
61574 | Muhammad Hassam Uddin
<!-- Replace name and student ids with acutally group member names and ids-->



##MiniJava Rules for Lexical Analyzer##

%{

#include<stdio.h>

#define OP 0

#define ID 1

#define Number 2

#define Keyword 3

#define Spaces 4

#define Bracket 5

#define Comment 6

#define Punctuation 7

#define Specifier 8

#define String 9

#define Program 10

#define Print 11

%}

%%

"class" {printf("\n %d Start of the program:%s",Program,yytext);}
main {printf("\n %d Name of class:%s",Program,yytext);}

"+"|"-"|"*"|"/" {printf("\n %d operators:%s",OP,yytext);}

"<"|">"|"=="|"!=" {printf("\n %d comparision Operators:%s",OP,yytext);}

"=" {printf("\n %d assignment:%s",OP,yytext);}
"&&"|"||" {printf("\n %d logical Operators:%s",OP,yytext);}

[a-zA-Z] {printf("\n %d letters:%s",String,yytext);}
[0-9]* {printf("\n %d digits:%s",Number,yytext);}

"("|")"|"["|"]"|"{"|"}" {printf("\n %d brackets:%s",Bracket,yytext);}

int|void|boolean|double|float {printf("\n %d keywords:%s",Keyword,yytext);}

"."|";"|"," {printf("\n %d Punctuations:%s",punctuation,yytext);}

private|static {printf("\n %d specifiers:%s",Specifier,yytext);}
if|else {printf("\n %d loops:%s",Keyword,yytext);}

void|int {printf("\n %d return type:%s",Keyword,yytext);}

"System.out.println"|"System.out.print" {printf("\n %d Print statement:%s",Print,yytext);}

[a-zA-Z]+[_a-zA-Z0-9]* {printf("\n %d Variable:%s",ID,yytext);}
null|return|this|new|true|false {printf("\n %d Reserved Keywords:%s",Keyword,yytext);}

do|while|switch {printf("\n %d Loop Statements:%s",Keyword,yytext);}

[ |\n|\t|" "] {printf("\n %d Whitespaces:%s",Spaces,yytext);}

"*/"
"//"[a-zA-Z0-9!@#.,:$%^&()_+]|"/"[a-zA-Z0-9!@#$%^&()_+]"/" {printf("\n %d Comment:%s",Comment,yytext);}

%%
int main()
{
yylex();

}
