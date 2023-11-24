#include<stdio.h>
int main()
{
    int str;
    printf("The star petran is : ");
    scanf("%d",&str);

    for(int i=0;i<=str;i++)
    {
        for(int j=1;j>=str;j--)
        {
            printf("*");
           // printf("\n");
        }
       // printf("#");
    }
}