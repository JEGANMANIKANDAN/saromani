#include<stdio.h>
#include<conio.h>
void main()

{
    int a,n,rev=0;
    clrscr();
    scanf("%d",&a);
    while(a!=0)
    {
        n=a%10;
        rev=rev*10+n;
        a=a/10;
    }

    printf("%d",rev);
}
getch();
}
