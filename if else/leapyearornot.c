#include<stdio.h>
int main()
{
    int year;
    
     printf("enter the year :\n ");
     scanf("%d",&year);

    if(year%4==0)
    {
         printf("this year is leap year : \n");
         
    }
    else 
    {
        /* code */
        printf("This year is not a leap year : \n");
    }
    
    printf(" thank you coding ");
    return 0 ;
}