#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the factorial number :");
    scanf("%d",&num);
    printf("The factore number is %d\n",num);
    for(i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}