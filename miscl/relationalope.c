#include<stdio.h>
int main()
{   
    int a, b, c, cfirst, csecond, cthird, cforth;//equal to is alwyas false or not equal to is alwyas true
    printf("enter a value of a: ");
    scanf("%d", &a);
    printf("enter a value of b: ");
    scanf("%d", &b);
    cfirst = a + b;
    csecond = b - a;
    cthird = a * b;
    cforth = a / b;
    c = !(cfirst + csecond & cthird + cforth);
    printf("your value is equal or not equal : %d", c);
    return 0;
}