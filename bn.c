#include<stdio.h>
#include<conio.h>

void main()
{
    int i,c=0;
    char a[10];
    clrscr();
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c=c+1;
        }
    }
    printf("%d",c);
  
}
getch();
}
