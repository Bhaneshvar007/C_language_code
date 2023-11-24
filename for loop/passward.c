#include<stdio.h>
int main()
{
    int a,pass;
    while (pass!=0)
    {
        printf("enter the passeard : ");
        scanf("%d",&a);
        if(a==25804)
        {
            printf("'Correct passward'\n\n");
            printf(" Thank You (\_/)");
            pass=0;
        }
        else
        {
            printf("'In-Correct passward'\n < please try again later >\n\n");
        }
    }
    return 0;
    
}