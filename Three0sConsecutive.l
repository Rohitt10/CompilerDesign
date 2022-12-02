%{
#include<stdio.h>
#include<string.h>
int flag = 0;
%}
  
/* Rules Section*/
%%
.*000.*   {printf("String with three consequitive 0s.");}/* Rule for counting 
                          number of words*/
.*     {printf("String  not with three consequitive 0s.");}
%%
  
int yywrap(void){}
  
int main()
{
    printf("Enter a string: ");
    yylex();
  
    return 0;
}