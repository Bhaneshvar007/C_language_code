#include<stdio.h>
int main()
{
    int odd , sum = 0;

    printf("the odd number is :");
   scanf("%d",&odd);

   for(int i=1;i<=odd;i++)
   {
    
    if(i%2==!0)
    {
       
       printf("%d\n",i);
       sum = sum + i;
    }
   }
    printf("total odd sum is : %d",sum);
   return 0;
}