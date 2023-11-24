#include<stdio.h>
int main()
{
    int m;
    printf("enter the number (odd or even) : ");
    scanf("%d",&m);
    oddeven(m);
    return 0;
}
oddeven (int m)
{
    if(m%2==0)
    {
        printf("The number is even number \n");

    }
    else
    {
        printf("The number is odd number ");
    }
}