#include<stdio.h>
int main()
{
    // char a;
    // printf("enter the any char : ");
    // scanf("%c",&a);

    // printf(" the ascii value is %c = %d",a,a);
    int a;
    printf("enter the value : ");
    scanf("%d",&a);

    printf("ascii value of %d = %c" ,a,a);
    printf("tha alfabte of A to Z is ");
    for(a='A';a<='Z';a++)
    {
        printf("%d\n",a);
    }

    return 0 ;
}