#include<stdio.h>
double main()
{
    double a;
    printf("enter a value of a: ");
    scanf("%if", &a);
    a = sizeof(a);
    printf("your value meamory is: %lf", a);
    return 0;
}