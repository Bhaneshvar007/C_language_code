#include<stdio.h>
int main()
{
    int dept;
    printf("I can entering in jablpuriya showroom :\n");

    printf("think the entering department:\n");
    
    printf("enter the department number\n");
    scanf("%d",&dept);

    {
        if(dept==1)
        {
          printf("in this dept storerd to electric gadate\n");
        }
        else if(dept==2)
        {
          printf("in this dept storerd to graosery ");
        }
        else if(dept==3)
        {
          printf("in this dept storerd to froot");
        }
        else if(dept==4)
        {
          printf("in this dept storerd to mobile phone's");
        }
        else if(dept==5)
        {
          printf("in this dept storerd to laptop's");
        }
        else if(dept==6)
        {
          printf("in this dept storerd to clothe's");
        }
    }
    return 0;
}