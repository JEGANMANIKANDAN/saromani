#include<stdio.h>
#include<Conio.h>
void mian()
{
char a[10];
int n,i;
clrscr();
 scanf("%s",a);
  n=strlen(a);
  for(i=n-1;i>=0;i--)
  {
  printf("%c",a[i]);
  }
  getch();
  }
