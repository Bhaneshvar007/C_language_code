#include<stdio.h>
int main()
{
   int t,p,r,n;

   printf("enter the number is : ");
   scanf("%d",&n);

   printf("enter the rate is :");
   scanf("%d",&r);

   printf("enter the time is : ");
   scanf("%d",&t);

   printf("enter the persentage is : ");
   scanf("%d",&p);

   int SI = ((r*t*n*p)/100);

   printf(" the simple intrst is %d " ,SI);
   
   return 0;
   
}