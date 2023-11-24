#include<stdio.h>
void foar(int i);
int main()
{
    int x;
    foar(x);
    printf("%d",x);  //adress of x = ?
}
void foar(int i)
{
    int sum = 0;
    for(i=0;i<=10;i++)
   { 
     printf("%d\n",i);
     sum = sum+i;
   }
    printf("sum is %d",sum);
}
