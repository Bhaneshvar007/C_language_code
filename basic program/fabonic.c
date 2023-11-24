#include<stdio.h>
int main()
{
    int i , n ,n1=0,n2=1,fab;
    fab = n1 +n2;
    
    printf("enter the number : ");
    scanf("%d",&n);

    printf("%d , %d ,",n1,n2);

    for(i=2;i<=n;i++)
    {
        printf("%d , ",fab);
        n1=n2;
        n2=fab;
        fab = n1 + n2;
    }
    return 0;
}