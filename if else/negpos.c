#include<stdio.h>
int main()
{
     int arr[10],n,pos=0,neg=0,zero=0;
     printf("enter the 10 number\n : ");
     for(n=0;n<10;n++)
     
        scanf("%d",&arr[n]);
     
     for(n=0;n<=10;n++)
     {
        if(arr[n]>0)
        
            pos++;
        //printf("\n positive number = %d",pos);
        
        else if(arr[n]<0)
            neg++;
         //printf("\n negative number = %d ",neg);
        else
             zero++;
         //printf("\n zero number %d = ",zero);
         printf("\n positive number = %d",pos);
         printf("\n negative number = %d ",neg);
         printf("\n zero number %d = ",zero);
     }
     return 0;
}
