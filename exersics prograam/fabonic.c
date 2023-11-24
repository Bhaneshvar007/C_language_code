#include<stdio.h>
int main()
{
    int x , y , z ,i=0;
    x=0,y=1;
    printf("%d,%d,",x,y);
    z=x+y;
    printf("%d,",z);
    for(int i=1;i<=10;i++)
    {
        /* code */
        x=y;
        y=z;
        z=x+y;
    printf("%d,",z);
    }
    

}