#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the number of line pettrun : ");
    scanf("%d",&k);

    // draw the star petturn increment and decrement using for loop 

    /*//for(i=1;i<=k;i++)  // increment peturn .
    for(i=k;i>=1;i--)  //decrement peturn .
    { 
        for(j=1;j<=i;j++)
        {
            printf("|| * ");
        }
        printf("\n");
    }*/

    // draw the star peturn using while loop  ''
    i=1;
    while(i<=k)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }  printf("\n");
        i++;  
    }
    
    return 0;
    }