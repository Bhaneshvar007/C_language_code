#include<stdio.h>
int main()
{
    int n,i,search,mid,first,last,a[50];
    printf("enter the total number :");
    scanf("%d",&n);
    printf("enter the %d number is :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the found element :");
    scanf("%d",&search);
    first=0,last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<search)
        {
           first=mid+1; 
        }
        else if(first=last)
        {
            printf("%d element location is %d\n",search,mid+1);
            break;
        }
        else
        {
            last=mid+1;
        }
        mid=(first+last)/2;
    }
    if(first>last)
    {
        printf("no element found in this list %d",search);
    }
    return 0;
}