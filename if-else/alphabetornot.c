
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    int aschii = (int)a;
    if ((aschii >= 65 && aschii <= 98) || (aschii >= 97 && aschii <= 122))
    {
        printf("it is an alphabet");
    }
    else
    {
        printf("it is not an alphabet");
    }
    return 0;
}

