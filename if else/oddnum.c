#include<stdio.h>
int main()
{
    int i;
    printf("the odd number is 1to 100 : ");
    for(i=0;i<=1000;i++)
    {
        if(i%2==1)
        printf("\tthe odd num is %d",i);

    }
    return 0;

}