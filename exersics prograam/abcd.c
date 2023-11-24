#include<stdio.h>
int main()
{
    char alf;

    printf("The alfabate(small) to the ascii value is :\n");
    for(alf='a';alf<='z';alf++)
    {
        printf("%d ,",alf);
    }

    printf("The alfabate(capital) to the ascii value is :\n");
    for(alf='A';alf<='Z';alf++)
    {
        printf("%d ,",alf);
    }
}