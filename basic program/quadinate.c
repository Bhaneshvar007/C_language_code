#include<stdio.h>
int main()
{
    int a , b ;
    
    printf("enter the first value : ");
    scanf("%d",&a);

    printf("enter the secound value : ");
    scanf("%d",&b);

    if(a<0 && b<0)
    {
        printf("coordinates are I(-,-)");
    }
    
    else if (a>0 && b>0)
    {
        /* code */
        printf("coordinates are II(+,+)");
    }
    else if(a>0 && b<0)
    {
        printf("coordinates are III(+,-)");
    }
    else if(a<0 && b>0)
    {
        printf("coordinates are IV(-,+)");
    }
    return 0 ;    
}