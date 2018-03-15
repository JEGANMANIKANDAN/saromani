#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    clrscr();
    printf("Enter the Two num:");
    scanf("%d%d",&i,&j);
    
  k=i;
  i=j;
  j=k;
    
    printf("The swap num is %d and %d",i,j);
}
getch();
}
