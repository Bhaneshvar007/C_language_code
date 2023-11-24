#include<stdio.h>
int main()
{
    int hight , width;

    printf("enter the hight");
    scanf("%d",&hight);

    printf("enter the width");
    scanf("%d",&width);

    int area = hight * width ;
    
    printf("area of ractangle is %d",area);
    return 0;

}