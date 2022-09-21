/*Definition Section*/ 
%{ #include<stdio.h>
%}

/*Rule Section*/ 
%% 
"//".* ;	 
"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/ ;	
%% 
int yywrap(){}
int main()
{
yyin=fopen("input6.c","r");
yyout=fopen("out.c","w");
/*call the yylex function.*/
yylex();
return 0;
}
