#include<stdio.h>
#define MAX 100
int main()
{
	char state='a';
	int length;
	char c[MAX];
	printf("String: ");
	scanf("%s",c);
	int i;
	for(i=0;c[i]!='\0';i++)
	{
		switch(state)
		{
			case 'a':
				if(c[i]=='0')
					state='b';
				else if(c[i]=='1')
				state='d';
				break;
			case 'b':
				if(c[i]=='0')
				state='a';
				else if(c[i]=='1')
				state='c';
				break;
			case 'c':
				if(c[i]=='1')
				state='b';
				else if(c[i]=='0')
				state='d';
				break;
			case 'd':
				if(c[i]=='0')
				state='c';
				else if(c[i]=='1')
				state='a';
				break;			
		}
	}
	if(state=='a')
	printf("String is accepted");
	else
	printf("String is not accepted");
	return 0;
}
