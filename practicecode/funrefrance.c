#include<stdio.h>
void add(int *a ,int *b);
void sub(int *A ,int *B);
void change(int *i,int *j);
int main()
{
  int x=15,y=6;
  //printf("enter the value x and y :: ");
  //scanf("%d%d",&x,&y);
  int ADD=x+y;
  printf("main function sum is %d\n",ADD);
  change(&x,&y);  //chane value x&y
  add(&x,&y);
  sub(&x,&y);
  int sum=x+y;
  printf("main function sum is %d\n",sum);
  return 0;
}
void change(int *i,int *j)
{
    *i=100;
    *j=200;
    printf("change value x is %d and y is %d\n",*i,*j);
}
void add(int *a,int *b)
{
    int add = *a+*b;
    printf("sum is %d\n",add);
}
void sub(int *A,int *B)
{
    int sub=*A-*B;
    printf("subtractor is %d\n",sub);
}