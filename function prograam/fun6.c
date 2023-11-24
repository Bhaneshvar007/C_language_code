#include<stdio.h>
asign();
int main()
{
    int x , y ;

    printf("enter the number : ");
    scanf("%d",&x);

    printf("enter the number : ");
    scanf("%d",&y);

    asign(x,y);
    return 0 ;
}

asign(int x , int y)
{
    if(x>y)
    {
        printf("Desanding Order ");
    }
    else
    {
        printf("Asending Order ");
    }
}