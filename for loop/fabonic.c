#include<stdio.h>
int main()
{
    int i,fab;
    int t1=0 ,t2=1;
    int nextturm = t1+t2;
    
    printf("enter the end fabonic number :");
    scanf("%d",&fab);

    printf("fabono seerius :%d,%d,",t1,t2);
   for(i=3;i<=fab;i++)
    {
       printf("%d , ",nextturm);
       t1=t2;
       t2=nextturm;
       nextturm = t1+t2;
    }
    
return 0;

}