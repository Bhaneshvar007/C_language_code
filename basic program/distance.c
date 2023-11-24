#include<stdio.h>
int main()
{
    float x1,x2,y1,y2 ;
    printf("enter the value of x1 \n ");
    scanf("%f",&x1);

    printf("enter the value of x2 \n ");
    scanf("%f",&x2);

    printf("enter the value of y1 \n ");
    scanf("%f",&y1);

    printf("enter the value of y2 \n ");
    scanf("%f",&y2);

    float distance = ((x2-x1)*(x2-x1) )+((y2-y1)*(y2-y1));
    
    printf("the distance is %f ",sqrt(distance));

    return 0;
}