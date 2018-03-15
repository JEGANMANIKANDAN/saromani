#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    clrscr();
    printf("Enter the Two num:");
    scanf("%d%d",&x,&y);
    
  z=x;
  x=y;
  y=z;
    
    printf("The swap num is %d and %d",x,y);
}
getch();
