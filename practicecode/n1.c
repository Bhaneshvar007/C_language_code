#include<stdio.h>
int main()
{
    int a,i;
    while (i!=0)
    {
        printf("enter the number is :");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("I phone!\n");
            break;
        case 2:
            printf("Redmi!\n");
            break;
        case 10:
            printf("nothing 1\n");
            break;        
        default:
            printf("nothinf else\n");
            i=0;
        }
    }    
   
   return 0;
}