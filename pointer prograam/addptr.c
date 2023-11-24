#include<stdio.h>
int main()
{
     int x=20,y=10;
     int *ptr=&x;
     int *ptr=&y;
     printf("%d\n",x);
     printf("%d\n",y);
    // int add=(*x)+(*y);
    // int *ptr=&add;
     printf("%d",*ptr);

}
