#include<stdio.h>
int main()
{
    int i;
    
    printf("print variable in asending order\n");

    for(i=0;i<=10;i++)
    {
        printf("%d\t",i);
    }
    
    printf("\nprint variable in desending order\n");

    for(i=10;i>=0;i--)   
    {
        printf("%d\t",i);
    }
    return 0 ;
}