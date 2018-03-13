#include<stdio.h>
#include<Conio.h>
void main()
{
    int n,i,temp;
    clrscr();
    printf("Enter the n vlaue");
    scanf("%d",&n);
    
     int a[n];
     
     for(i=0;i<n;i++)
         {
       scanf("%d",&a[i]);  
         }
     
     for(i=0;i<n;i++)
         {
             if(a[i]>a[i+1])
              
              {
             temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
               }
          
          }
          
     printf("large num is %d",a[i]);
     printf("Small num is %d",a[0]);
}
getch();
}
