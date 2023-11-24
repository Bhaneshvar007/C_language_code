#include<stdio.h>
int main()
{
    int n,m,i,result;

    printf("enter the base value : ");
    scanf("%d",&n);

    printf("enter the ghat value : ");
    scanf("%d",&m);
    result = n;
    for( i = 1; i < m; i++){
        /* code */
        result = result*n; //n^m 
    }
    printf(" the result value %d\n",result);

    return 0;
}