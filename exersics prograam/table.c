#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the number of the table  :");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
       int tab = i * n ;
       printf(" %d \n",tab);
    }
}