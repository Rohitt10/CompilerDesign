%{
#include<stdio.h>
#include<string.h>
int count = 0;
%}
  
/* Rules Section*/
%%
.*00   {printf("Ending with 00");}/* Rule for counting 
                          number of words*/
.*     {printf("Not Ending with 00");}
%%
  
int yywrap(void){}
  
int main()
{
    printf("Enter String: ");
    yylex();
  
    return 0;
}