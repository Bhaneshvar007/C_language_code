//  call by refrance

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=4,b=100;
    printf("Before swaping value a & b is %d & %d",a,b);
    swap(&a,&b);
    printf("\nafter swaping value a & b is %d & %d",a,b);
}
void swap(int *a,int *b)
{
  int swap=0;
  swap=*a;
  *a=*b;
  *b=swap;
  printf("\nafter function swaping value a & b is %d & %d",*a,*b);
}
/*
      /-orignal value-\ 
           ||
           ||
       modifiyed \\ update value in mainfnction //
           ||
           ||
      ---------------
    |NO|          |yes|  
     |              |
     |              |
  [value]       [refrance]
   */