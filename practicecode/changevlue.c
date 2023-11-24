#include<stdio.h>
void change(int *x,int *  y);
int main()
{
    int a,b;
    a=9,b=8;
    printf("the value(in main function) of a is %d and b is %d\n",a,b);
    int sum=a+b;
    printf("sum is %d\n",sum);
    change(&a,&b);
    printf("\nvalue is a of %d  b of %d\n",a,b);
    int sum1=a+b;
    printf(" sum is %d\n",sum1);
    
}
// call by refrance program

void change(int *x,int *y)
{
  *x=100;
  *y=90;
  printf("\nThe value(in formal function) of a is %d and b is %d",*x,*y);
}

//call by value prograam
/*void change(int x,int y)
{
  x=10;
  y=20;
  printf("\nThe value(in formal function) of a is %d and b is %d",x,y);

}*/