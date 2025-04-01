#include <stdio.h>
int main()
{
    int a;
    printf("enter a value of a: ");
    scanf("%d",&a);
    a++;
    int b = a++;
    printf("your b value is: %d",b);
    return 0;
}