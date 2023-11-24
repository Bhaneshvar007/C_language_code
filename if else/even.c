#include<stdio.h>
int main()
{
    int n;
    printf("the even numeber 1 to 50 number is\n : ");
    for(n=0;n<=50;n=n+1)
    {
        if(n%2==0)
        {
            printf("\n even number is %d",n);
        }
      
    }
    return 0;
}
