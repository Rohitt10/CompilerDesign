#include<stdio.h>
#define max 100
int main() {
char str[max],f='a';
int i;
printf("String: ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++) {

switch(f) {
case 'a': if(str[i]=='0') f='b';
else if(str[i]=='1') f='d';
break;
case 'b': if(str[i]=='0') f='a';
else if(str[i]=='1') f='c';
break;
case 'c': if(str[i]=='0') f='d';
else if(str[i]=='1') f='b';
break;
case 'd': if(str[i]=='0') f='c';
else if(str[i]=='1') f='a';
break;
}
}
if(f=='a')
printf("String is accepted");
else
printf("String is not accepted");
return 0;
}

