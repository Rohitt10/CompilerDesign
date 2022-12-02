%{
#include<stdio.h>
    int vow_count=0;
    int const_count =0;
%}
  
%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {const_count++;}
"\n" {printf("%d\n", vow_count);  vow_count= 0;printf("%d\n", const_count); const_count= 0;}
%%
int yywrap(void){
}
int main()
{
    printf("Enter the string of vowels and consonents:");
    yylex();
    return 0;
} 