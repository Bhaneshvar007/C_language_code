#include<stdio.h>
int main()
{
    int n1,n2,result;
    char oprator;
    
    printf("enter the any oprator(+ ,- ,* ,/ )");
    scanf("%c",&oprator);

    printf("enter the two nmber is : ");
    scanf("%d%d",&n1,&n2);

    switch (oprator)
    {
    case '+':

         result=n1+n2;
         printf("result is %d+%d=%d",n1,n2,result);
        break;
    case '-':

         result=n1-n2;
         printf("result is %d-%d=%d",n1,n2,result);
        break;
    case '*':

         result=n1*n2;
         printf("result is %d*%d=%d",n1,n2,result);
        break;
    case '/':

         result=n1/n2;
         printf("result is %d/%d=%d",n1,n2,result);
        break;
    default:

         printf("invalid oprator");
    }

    return 0;
}