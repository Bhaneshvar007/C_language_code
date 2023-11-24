#include<stdio.h>
int main()
{
    int i=0;  // start code
    do
    {
       printf("enter the number : ");
       scanf("%d",&i);

       printf("%d\n",i);
       
       // print all operator operation
        if(i<=10)
        {
          {
            int a,b,sum;

            printf("enter sum of the 1st &2nd number ");  //addition
            scanf("%d%d",&a,&b);

            sum=a+b;
            printf("sum is %d\n",sum);
          }
         //  break; 
       } 


       else if(i<=30)
        {
          {
            int a,b,sub;
            printf("enter sub of the  1st &2nd number ");  //subtarction
            scanf("%d%d",&a,&b);

            sub=a-b;
            printf("sum is %d\n",sub);
          }
         //  break; 
       } 


        else if(i<=60)
        {
          {
            int a,b,multi;
            printf("enter multi of the 1st &2nd number "); //multiplication
            scanf("%d%d",&a,&b);

            multi=a*b;
            printf("sum is %d\n",multi);
          }
         //  break; 
       } 


         else if(i<=90)
        {
          {
            int a,b,div;
            printf("enter div of the 1st &2nd number ");   //divide
            scanf("%d%d",&a,&b);

            div=a/b;
            printf("sum is %d\n", div);
          }
         //  break; 
       } 

    } 
    while (i<=100); // end statment

    printf(":- 'Thank for exit' -:");    
}