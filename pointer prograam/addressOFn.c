#include<stdio.h>
printadress(int value);
int main()
{
   int value=100;
   printf("tha value od addres is : %d\n",value);
   printadress(value);
   return 0;
}
printadress(int value)
{
    printf("the value of adress is the = %d",&value);
}