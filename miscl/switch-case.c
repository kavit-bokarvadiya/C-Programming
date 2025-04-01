#include<stdio.h>
int main()
{
    int a = 1, b = 2, c = 3, d = 4,e=5;
    switch (a)
    {
    case 1:
        printf("%d\n",a = 8+5);
    default:
        printf("%d\n",a = 8*5);
    case 3:
        printf("%d\n",a = 8/5);break;
    case 4:
        printf("%d\n",a = 8-5);break;
    }
    return 0;
}