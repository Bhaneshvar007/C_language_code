#include<stdio.h>
int swap(int a,int b);
int swapptr(int *a,int *b);
int main()
{
    int  a=5,b=10;
   // swap(a,b);
   // printf("a=%d & b=%d",a,b);
    int x =22,y=20;
    swapptr(&x,&y);
    printf("x=%d & y=%d",x,y);
    return 0;
}
//call by value.
int swap(int a,int b)
{
   int t;
   t=a;
   a=b;
   b=t;
   printf("a=%d & b=%d\n",a,b);
}
// call by refrance
int swapptr(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
   printf("a=%d & b=%d\n",a,b);
}