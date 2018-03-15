#include<Stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("Enter the i and j value: ");
scanf("%d%d",&i,&j);
k=i+j;
if(k%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}

}
getch();
}
