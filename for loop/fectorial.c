#include<stdio.h>
int main()
{
    int n,facto = 1 ;
    printf("enter the fectorial nuber : ");
    scanf("%d",&n);
    while(n)
    {
        facto = facto * n;
        n--;
    }
    printf("factorail is %d",facto);
    return 0;

}