//  Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.

#include<stdio.h>
int main()
{
    int i;

    printf("enter the number is wether : ");
    scanf("%d",&i);

   if(i==0)
   {
        printf("positive number ");
   }

    else if(i>0 && i%2==0)
    {
         printf(" positive even number ");
    }

    else if (i>0 && i%2==1)
    {
        printf("positive odd number ");
    }

    else if ( i<0 && i%2==0)
    {
         printf(" negative even number ");
    }
    else if (i<0 && i%2==1)
    {
        printf("negative odd number");
    }
    
    return 0 ;

}