
#include<stdio.h>
#include<string.h>
 void main()
 {
     int i,count=0;
     char a[50];
     gets(a);
     clrscr();
     
     for(i=0;a[i]!='\0';i++)
     {
         if(a[i]=='')
         {
         count++;
         }
     }
     printf("%d",count);
     
 }
 getch();
 }
