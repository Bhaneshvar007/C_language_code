#include<stdio.h>
int main()
{
    int n, fact = 1;

    printf("enter the factorial number : ");
    scanf("%d",&n);

    fectorial(fact,n);
    return 0;
}
fectorial(int fact ,int n)
{
    while(n)
    {
        fact = fact * n;
        n--;
    }
    printf("tha facto is %d ",fact);
}