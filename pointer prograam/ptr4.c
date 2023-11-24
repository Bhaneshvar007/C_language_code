#include<stdio.h>
int main()
{
    int x = 2004;
    int * ptr=&x;
    printf("num = %d\n",x);
    printf("value = %d\n",*ptr);
 
    for((*ptr)=1;(*ptr)<=10;(*ptr)++)
    {
        printf("%p\n",*ptr);
    }
}