#include<stdio.h>
int main()
{
    int n,c,a[10][10],b[10][10],sum[10][10],i,j;
    printf("enter the matrx row :");
    scanf("%d",&n);

    printf("enter the metrix of coloum :-");
    scanf("%d",&c);

    printf("enter the first matrix elemant :-\n");
    for(i=0;i<n;i++)
{
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
}
printf("\nthe 1st array metrix is :-");
for(i=0;i<n;i++)
{
    printf("\n");
    for(j=0;j<c;j++)
    printf("%d  ",a[i][j]);
}
// print the secound metrix

printf("\nenter the secound metrix elemant :-");
for(i=0;i<n;i++)
{
    //printf("\n");
    for(j=0;j<c;j++)
    scanf("%d",&b[i][j]);
}
printf("\nthe 2nd array matrix is :-");
for(i=0;i<n;i++)
{
    printf("\n");
    for(j=0;j<c;j++)
    printf("%d ",b[i][j]);
}
printf("\nadd array matrix is :-\n");
for(i=0;i<n;i++)
{
    for(j=0;j<c;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
      printf("%d ",sum[i][j]);
    //printf("%d ",sum[i][j]);
    }
    printf("\n");

}
}