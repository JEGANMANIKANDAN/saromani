#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("Enter the num 1 to 10");
    scanf("%d",&n);
     switch(n)
     {
         case 1:
         printf("\n one");
         break;
         
         case 2:
         printf("\n Two");
         break;
         
         case 3:
         printf("\nThree");
         break;
         
         case 4:
         printf("\nFour");
         break;
         
         case 5:
         printf("\nFive");
         break;
         
         case 6:
         printf("\nSix");
         break;
         
         case 7:
         printf("\nSeven");
         break;
         
         case 8:
         printf("\nEight");
         break;
         
         case 9:
         printf("\nNine");
         break;
         
         case 10:
         printf("\nTen");
         break;
         
         default:
         printf("Enter the num 1 to 10");
     }
}
getch();
}
