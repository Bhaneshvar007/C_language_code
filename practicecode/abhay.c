#include<stdio.h>
void main()
{
    int a=0,b=1,c,i,n; 
    printf("enter the number=");
    scanf("%d",&n);
   for(i=1;i<n;i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
   }
}