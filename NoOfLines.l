%{
#include<stdio.h>
#include<string.h>
int count = 0;
%}
  
/* Rules Section*/
%%
\n  {count++;}
stop {printf("%d",count+1);}
%%
int yywrap(void)
{
return 1;
}
int main()
{
    printf("Enter a String and type stop to end the string: ");
    yylex();
    return 0;
}