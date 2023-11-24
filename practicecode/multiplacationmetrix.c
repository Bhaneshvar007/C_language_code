#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],multi[3][3],j,i,k,sum=0;
   
    //print first metrix in n*n

    printf("enter the array element of first metrix :");
    for (i=0;i<3;i++)
    {  
     //printf("\n");
     
      for (j=0;j<3;j++)
       scanf("%d",&a[i][j]);
    }
    printf("array element metrix is : ");

    for (i=0;i<3;i++)
    {
      printf("\n");
        for (j=0;j<3;j++)
          printf("%d ",a[i][j]); 
    }
    printf("\n");

    //print secound metrix in n*n

    printf("enter the array of secound metrix :");
    for (i=0;i<3;i++)
    {  
     //printf("\n");
      for (j=0;j<3;j++)
       scanf("%d",&b[i][j]);
    }
    printf("array element metrix is : ");
    for (i=0;i<3;i++)
    {
      printf("\n");
      for (j=0;j<3;j++)
       printf("%d ",b[i][j]);    
    }
    
   printf("\nthe multiplication metrix is :\n");
    for (i=0;i<3;i++){
      for (j=0;j<3;j++)
      {
       multi[i][j]=0;
       for(k=0;k<3;k++)
        multi[i][j]=multi[i][j]+a[i][j]*b[k][j];
      }
    }
     for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
      {
        printf("%d ",multi[i][j]);
      }
        printf("\n");
    }
    return 0;    
}