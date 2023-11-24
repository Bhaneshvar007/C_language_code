#include<stdio.h>
int main()
{
    char c,alfb_case;

    printf("enter any alfabate : ");
    scanf("%c",&c);

   if(alfb_case|c=='a'||c=='i'||c=='o'||c=='u'||c=='e')
   {
    printf("vovel alfabate : \n");
   }
   else
   {
    printf("consonent alfabate");
   }
    return 0 ;
}