#include<stdio.h>
int main()
{
    int rollno,phs,cham,meths,hindi,eng;
    printf(" name -: Bhaneshvar kshiesagar\n");
    printf("enter your roll number :");
    scanf("%d",&rollno);

    printf("enter your physics marks :");
    scanf("%d",&phs);

    printf("enter your chemistry marks :");
    scanf("%d",&cham);

    printf("enter the methamitics marks :");
    scanf("%d",&meths);

    printf("enter your hindi marks :");
    scanf("%d",&hindi);
    
    printf("enter your english marks :");
    scanf("%d",&eng);

    int total=phs+cham+meths+hindi+eng;
    printf("total_marks is :%d\n",total);
    
    float per=(total/5);
    printf("persentge is :%f\n",per);

    if(total<33)
    {
        printf("stdent is fail");
    }
    else if(total<=50)
    {
        printf("student pass in third rank");
    }
    else if(total<=85)
    {
       printf("student pass in secound rank");
       
    }
    else if(total<=99)
    {
        printf("student pass in first rank");
    } 
    printf("Thank you *_*");  
   
 
}