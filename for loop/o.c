#include<stdio.h>
int main()
{
    int x ,sum ;
    printf("print the even number and count the all number :- \n");
    for(x=1;x<=50;x++)
   {
        if (x%2==0)
        {
            /* code */
            printf("The even number is %d : \n",x);
        }
        sum = sum + x;
    }
    printf(" All even sum is %d :\n ",sum);
    printf("\n");


    printf("print the odd number and count all the number :- \n");
    for ( x=1;x<=50;x++)
    {
     if ((x%2)==!0)
        {
            /* code */
            printf("The odd number is %d :\n ",x);
        }
     sum = sum + x;
    }
    printf("All odd sum is %d :\n ",sum);
    return 0;
}