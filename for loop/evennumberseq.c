//write a program to print the even/odd/all the number sequre //

#include<stdio.h>
int main ()
{
    int i ,x ;
    printf("enter the integer value : ");
    scanf("%d",&x);
   
 // sequre all the number 

    printf("list the number of calulate seq. to the  1 to  %d \n ", x);
    for(i=1;i<=x;i++)
    printf("%d^2=%d\n" , i,i*i);
     
 // sequre the even number

      printf(" list the number of calulate seq of even to the  1 to  %d \n " , x);
      for(i=1;i<=x;i++)
      if(i%2==0)
      {
        printf("%d^2=%d \n ",i,i*i);
      }
// seqire of odd number 
    
    printf(" list of the odd number seq to the 1 to %d\n ", x);
    for(i=1;i<=x;i++)
    {
        if(i%2==1)
        {
            printf("seq of the %d^2 = %d \n ",i, i*i);
        }
    }
      return 0;
}