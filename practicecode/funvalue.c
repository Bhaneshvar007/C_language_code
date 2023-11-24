#include<stdio.h>
void add(int a,int b);
void subtract(int A,int B);
int main()
{
    int x,y;
    printf("enter the value of x and y :");
    scanf("%d%d",&x,&y);
    add(x,y);
    subtract(x,y);
    return 0;
}
void add(int a,int b)
{
    int add = a+b;
    printf("sum is %d\n",add);
}
void subtract(int A,int B)
{  
     int sub = A-B;
    printf("subtarctor is %d\n",sub);
}