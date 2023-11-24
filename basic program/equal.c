#include<stdio.h>
int main()
{
    int num1 , num2;

    printf("Enter the firts number \n");
    scanf("%d",&num1);

    printf(" Enter the secound number\n ");
    scanf("%d",&num2);

    if(num1==num2)
    {
        printf("num1 and num2 is equal \n");
    }
    else
    {
        printf("num1 and num2 is not ! eqal \n");
    }
    return 0;
}