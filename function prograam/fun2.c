#include<stdio.h>
int sum();
int main()
{
    int a,b;
    printf("enter the 1st number : \n");
    scanf("%d",&a);

    printf("enter the 2nd number : \n");
    scanf("%d",&b);
  //  printf("The sum is : %d\n",sum);
    
     int sum();
    int s=sum(a,b);
    return 0;
}
int sum(int a,int b)
{
     int sum =a + b;
    printf("sum is : %d \n",sum);
   // return a+b; 

}
