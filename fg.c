#include<stdio.h>
#include<conio.h>
void main()
{
    int i,b;
    int m[10];
    clrscr();
    
     printf("Enter the value :");
     for(i=0;i<10;i++)
     {
         scanf("%d",m[i]);
     }
     for(i=0;i<10;i++)
     {
         if(m[i]>m[i+1])
         {
             b=m[i];
             m[i]=m[i+1];
             m[i+1]=b;
         }
     }

    printf("The value is %d",m[i]);
}
getch();
