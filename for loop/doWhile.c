#include<stdio.h>
int main()
{
    int i = 10, n;
    printf("ENter value of n");
    scanf("%d",&n);
    do
    {
        /* code */
        printf("\n value of n is: %d", n);
        n = n + 1;
    } while (n <= i);
    
    return 0;

}