#include<stdio.h>
int main()
{
    int table;
    printf("The table of the number is \n: ");
    for(table=0;table<=20;table++)
    {
        if(table%2==0)
        printf("%d\n",table);
    }
    return 0;
}
