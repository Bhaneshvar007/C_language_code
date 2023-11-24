#include<stdio.h>
int main()
{
   float rad ,PI;
   PI=3.14;
   
   printf("enter the circle radias : ");
   scanf("%f",&rad);

   float area = PI*rad*rad;
   
   printf("area of circle is %f",area);

   return 0 ;
   
}