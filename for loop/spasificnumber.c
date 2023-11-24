//  Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.

#include<stdio.h>
int main()
{
    int a,i;
    
    printf("enter the integer number is :");
    scanf("%d\n",&a);

    for(i=1;i<=100;i++)
    {
       /* if((i%a)==3)
        {
            printf("%d\n",i);
        }*/
        if(i%a==2)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}