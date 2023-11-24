#include<stdio.h>
int main()
{
    int x,i=1;
   printf("enter the number :");
   scanf("%d\n",&x);
    do
    {
        printf("\nthe number is : %d",i);
        i++;
    }
    while(i<=x);

     return 0;    
    
}