#include<stdio.h>
int main()
{
    int num1,num2,i,sum=0;
    
    printf("enter the first integer number of pair : ");
    scanf("%d",&num1);

    printf("enter the secound number of pair : ");
    scanf("%d",&num2);

	if (num1<num2)
	{
		return 0;
	}

    for(i=num2;i<=num1;i++)
    {
        if((i%2)==1)
        {
            printf("%d\n",i);
            sum += i;
        }
    
    }
    printf("sum = %d",sum);

    return 0 ;

}