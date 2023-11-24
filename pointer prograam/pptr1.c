#include<stdio.h>
int main()
{
    int a;
    printf("enter the numbr :");
    scanf("%d",&a);

    int*ptr=&a;
    int**pptr=&ptr;

    printf("The value is :%d\n",*ptr);
    printf("The address is : %d\n",ptr);
}