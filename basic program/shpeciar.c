#include<stdio.h>
int main()
{
    float rad;
    printf("enter the radias : ");
    scanf("%f",&rad);

    float valume = 4*rad*rad*rad*3.14/3;
    printf("%f",valume);
    
    return 0;

}