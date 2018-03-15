#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int s1=-1,s2=1,s3;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s3=s1+s2;
        printf("%d",s3);
        s1=s2;
        s2=s3;
    }
}
getch();
}
