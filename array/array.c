#include<stdio.h>
int main()
{
    int a[2][2],j,i;
    printf("enter the array element :");
    for (i=0;i<2;i++)
    {  
     //printf("\n");
      for (j=0;j<2;j++)
       scanf("%d",&a[i][j]);
    }
    printf("array element metrix is : ");

    for (i=0;i<2;i++)
    {
      printf("\n");
      for (int j=0;j<2;j++)
       printf("%d ",a[i][j]);    
    }
    return 0;    
}