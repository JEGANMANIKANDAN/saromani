
#include<stdio.h>
#include<conio.h>
void main()

{
    int b,m,rev=0;
    clrscr();
    scanf("%d",&b);
    while(b!=0)
    {
        n=b%10;
        rev=rev*10+n;
        b=b/10;
    }

    printf("%d",rev);
}
getch();
