#include<stdio.h>
void recursion(int x,int y,int *sum,int *avg,int *prod); //show
int main()
{
    int x=10,y=20;
    int sum,avg,prod;     //prod=product,avg=average
    recursion(x,y,&sum,&avg,&prod);  //call
    printf("sum = %d\n   avg = %d\n  prod = %d\n" ,sum,avg,prod);
    return 0;
}
void recursion(int x,int y,int *sum,int *avg,int *prod)   //define recursion ;
{
     *sum=x+y;
     *avg=(x+y)/2;
     *prod=x*y;
}