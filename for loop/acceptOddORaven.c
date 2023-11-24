#include<stdio.h>
int main()
{
    int num1,num2,sum=0,add=0;
    printf("enter the accept number odd or even :");
    scanf("%d",&num1);

    printf("enter the accept number odd or even :");
    scanf("%d",&num2);
   
   /* printf("next turm even number is :\n");
    for (int i = num; i < 50; i++)
    {
       if(i%2==0) 
       { 
          printf("%d,",i);
       }
    }
    printf("\nnext turm odd number is :\n");
    for (int i = num; i < 100; i++)
    {
     if(i%2!=0)
        {
          printf("%d,",i);         
        }
    } */
    printf("next turm even number sum is : ");
    for(int i=num1;i<=num2;i++)
    {
       if(i%2==0) 
       { 
          sum=sum+i;
       }
    }
      printf("sum is %d\n",sum);

   printf("next turm odd number sum is : ");
   for(int i=num1;i<=num2;i++)
    {
       if(i%2!=0) 
       { 
         add=add+i;
       }
    }
   printf("add is %d\n",add);
   
}
    
    