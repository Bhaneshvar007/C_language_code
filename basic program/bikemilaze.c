#include<stdio.h>
int main()
{
    float km,petrol;
    printf("enter the drive bike km is : ");
    scanf("%f",&km);

    printf("enter the bike of petrol ");
    scanf("%f",&petrol);

    float avg = km/petrol;

    printf("total bike cunsumar avg is %f",avg);
    
    
    return 0;
    
}