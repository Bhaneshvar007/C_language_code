#include<stdio.h>
int main()

{
    int ase,des;

    printf("Enter the pair value \n");

    printf("\n");
   
    printf("enter the first value in the pair  :\n ");
    scanf("%d",&ase);

    printf("enter the secound value in the pair : \n ");
    scanf("%d",&des);

    if(ase<des)
    {
        printf("the pair is asending order ");
    }
    else
    {
        printf("the pair is desending order ");
    }
    return 0 ;

}