#include<stdio.h>
int main()
{
  add();
  print();
  add();
  print();
  print();
  return 0;
}
add()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
    printf("\n");
}
print()
{
    printf("Enter\n");
}

