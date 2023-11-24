#include<stdio.h>
int main()
{
    float celsies,farhenhite;

    printf("enter the farhenhite value is :");
    scanf("%f",&farhenhite);

    celsies = (farhenhite - 32)*5/9;

    printf("celsies is %f",celsies);
    return 0 ;
    
}