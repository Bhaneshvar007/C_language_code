#include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter the first num : ");
    scanf("%d",&A);

    printf("enter the 2nd number : ");
    scanf("%d",&B);

    printf("enter the 3rd num : ");
    scanf("%d",&C);

    if (A>B && A>C)
    {
        /* code */
        printf("the A number is the largest number : %d",A);
    }
    else if( B>A && B>C)
    {
        printf(" The B number is the largest number : %d",B);
    }
    else
    {
        printf("The C number is the largest number :%d",C);
    }
    
}