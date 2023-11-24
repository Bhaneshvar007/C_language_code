#include<stdio.h>
int main()
{   //print the  address of the value
    int age;

    printf("enter the number :");
    scanf("%d",&age);

    int * ptr = &age;

   printf("%u\n",*ptr);

   printf("%u\n",&age);


   printf("%u",&ptr);

   return 0;
}