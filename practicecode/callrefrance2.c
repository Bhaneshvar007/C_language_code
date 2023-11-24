#include<stdio.h>
void multi(int *a,int *b);
void change_value(int *i,int *j);
int main()
{
    int x=10,y=9,mult;
    change_value(&x,&y);
    multi(&x,&y);
    int sum=x+y;
    printf("sum is %d\n",sum);
}
void multi(int *a,int *b)
{
    int mul=*a**b;
    printf("multiplication of x and y is %d\n",mul);
}
void change_value(int *i,int *j)
{
    *i=200,*j=900;
    printf("change valu in x and y is %d,%d\n",*i,*j);

}