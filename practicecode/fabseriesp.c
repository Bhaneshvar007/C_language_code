
 //write a prograam to enter the fabonic series{0,1,1,2,3,5,8,13,21,----}
 #include<stdio.h>
int main()
{
    int a,b,fab;
    a=0;b=1;
    fab=a+b;
    printf("%d %d ",a,b);
    for (int i = 2; i <= 10; i++)
    { 
       printf(" %d",fab);
       a=b;
       b=fab;
       fab=a+b;
    }
    return 0; 
}
 
//  write a prograam to implement the factorial {n(n-1)(n-2)(n-3),,,,[n-(n-1)]}
/*#include<stdio.h>
int main()
{
    int x,fact=1;
    printf("enter the number of factorial : ");
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
       fact  = fact * i;
    }
    printf("the  num of factorial is %d",fact);
    
}
*/