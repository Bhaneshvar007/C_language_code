#include<stdio.h>
int main()
{
    int n2;
  // printf("enter the multiplare number is starting from %d : %d",n1,n2);

    printf("enter the number:");
    scanf("%d",&n2);

    for(int i=1;i<=10;i++)
    {
        for (int j = 1; j <=n2; j++)
        {
            /* code */     
           printf("%d*%d=%d \t",j,i,i*j);
        }
    }

}