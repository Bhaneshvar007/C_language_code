#include<stdio.h>
int main()
{
    int x=10;
    int *ptr ,**qtr,***rtr;  //*ptr print 1st previous value mins [ x ] :and **qtr print 1st previous value mins [ *ptr ] 
   
    //*ptr=&x;
    
    printf("the value of x is :%d\n",*ptr);
    printf("the adress of x is :%u\n",ptr); //printf the adress using %d ,%p,%u but manually use %u more 
    
    (**qtr)=&x;  //call by 2nd stap <**qtr<*ptr<x 
    printf("the value of x  :%d\n",**qtr);
    printf("the adress of x is :%u\n",qtr);

   (***rtr)=&x;
    printf("the value of xn  :%d\n",***rtr);
    printf("the adress of x is :%u\n",rtr);

}