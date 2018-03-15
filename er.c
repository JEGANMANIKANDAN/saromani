#include <stdio.h>
#include<conio.h>

void main() 
{
	char string[50];
	int i,c=1;
	
	clrscr();
	
	printf("enter the sentence:");
	scanf("%[^\n]s",string);
	
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
		{
			c=c+1;
		}
	}
	printf("\n no of words=%d",c);
	return 0;
}
