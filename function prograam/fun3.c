#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    tab(n);
    tab(n);
    return 0;
}
tab( int n)
{
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        int tab = i * n;
        printf(" the table is %d\n",tab);
    }
    
}