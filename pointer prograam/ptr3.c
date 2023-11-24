#include<stdio.h>
int main()
{
    int abhi = 25;
    int*ptr=&abhi;

    printf("value is %d\n",abhi);
    printf("value =  %d\n",*ptr);

*ptr = *ptr+5;
         // update value is abhi 
    printf("value is %d\n",abhi);
    printf("value =  %d\n",*ptr);

   
  (*ptr)++;
         //update value is abhi 
            // or abhi ++; print same operation 
    printf("value is %d\n",abhi);
    printf("value =  %d \n",*ptr);

abhi =abhi *2;
    printf("value of the abhi is :  %d\n",abhi);
    printf("value of the printer is %d\n",*ptr);
}