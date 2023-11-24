#include<stdio.h>
int main()
{
    int a,b,t1,t2;  
    printf("enter the value of A ::");
    scanf("%d",&a);
    printf("enter the value of B ::");
    scanf("%d",&b);
    t1=a,t2=b;
    while(t1!=t2)
    {
        if(t1>t2)
        {
            t1=t1-t2;
        }
        else
        {
            t2=t2-t1;
        }
    }
    
int gcd=t1;  // greatest common divisior ;;
int lcm=(a/b)/gcd;  // least comon divisior
printf("lcm :: %d  ,  gcd :: %d",lcm,gcd);
return 0;
}