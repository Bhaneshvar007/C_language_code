#include<stdio.h>
int main()
{
    int i ;
    for(i=0;i<=10;i++)
    {
        if(i==4 ||i==6)
        {
            continue; // value is hide 
        }
                
        printf("the natural number is %d\n",i);
    }
    return 0;
}