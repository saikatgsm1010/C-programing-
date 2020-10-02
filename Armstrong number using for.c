#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,x,s=0,copy;
 copy=num;
 printf("Enter a number");
 scanf("%d",&num);
 for(i=num;i>0;x=i/10)
 {
   x=num%10;
   s=s+x*x*x;
   }
    if(copy==s)
    {
      printf("armstong number");
      }
      else
      {
       printf("not armstorng");
       }
    
   getch();
 }
