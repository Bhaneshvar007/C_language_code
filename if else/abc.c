#include<stdio.h>
int main()
{
    int m,n;

    printf("enter the any number (0 to .....and 0 to -....)\n");
    scanf("%d",&m);

    if (m !=0)
    {
        /* code */
        if (m>0)
        {
            /* code */
            n=1;
        }
        else
        {
            n=-1;
        }    
     printf("the value of n is %d\n",n);
    }
    else
    {
         n=0;
    }
    printf("tha value of m is %d\n ",m);    
    return 0;
}
