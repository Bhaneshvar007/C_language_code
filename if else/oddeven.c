#include<stdio.h>
int main()
{
    int x;

    printf("enter the number is : ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("number is even ");
    }
    else
    {
        printf("number is odd ");
    }
    return 0;

}