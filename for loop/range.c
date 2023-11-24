#include<stdio.h>
int main()
{
    int i,n,sqr;
    printf("enter the range of the sequre :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sqr=i*i;
        printf("the numvber of %d = %d\n",i,sqr);
    }
    return 0;
}