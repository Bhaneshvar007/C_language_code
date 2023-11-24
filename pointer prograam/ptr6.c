#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p=&a;
    int*q=&b;
    printf("the answar is %d , %u\n",a,&b);
    printf("the answar is %d , %u\n",&a,q);
    int *r=q-p;
    printf("%d",r);

}