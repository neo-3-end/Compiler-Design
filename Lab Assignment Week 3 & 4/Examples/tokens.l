/*Definition Section*/
%{
#include<stdio.h>
%}
%%
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short     {ECHO; printf("\tKEYWORD\n");} 						
[{};,()]   {ECHO; printf("\tSEPERATOR\n");}
[+-/=*%]   {ECHO; printf("\tOPERATOR\n");}						
[a-zA-Z_][a-zA-Z0-9_]* {ECHO; printf("\tIdentifier\n");} 
[0-9]*"."[0-9]+ {ECHO;printf("\t float\n");}  
[0-9]+ {ECHO;printf("\t integer\n", yytext);}
.|\n ; 	
%%
/*call the yywrap function*/
int yywrap(){}								

int main(void)
{
/*call the yylex function.*/
yyin=fopen("input1.c","r");
yylex();
return 0;
}