// conditional operator (ternary operator)

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n>0 ? printf("positive") : printf("non positive");
    return 0;
}