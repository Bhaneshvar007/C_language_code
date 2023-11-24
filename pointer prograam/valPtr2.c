#include<stdio.h>
int main()
{
   //print the value ::
    int age=55;
    int *ptr=&age;
    printf("the age is %d\n",age);

    printf("the age of the %d\n",*ptr);

    printf("the age = %d",*(&age));

    return 0;
}