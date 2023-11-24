#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a=4,b=3;
    printf("Before swaping value a & b is %d & %d",a,b);
    swap(a,b);
    printf("\nafter swaping value a & b is %d & %d",a,b); //not change value in main function
}
void swap(int a,int b)
{
  int swap=0;
  swap=a;
  a=b;
  b=swap;
  printf("\nafter function swaping value a & b is %d & %d",a,b);//change value in formal function
}