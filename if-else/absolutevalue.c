#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer: ");
    scanf("%d",&n);
    if (n<0)
    {
        n = -n;
    }
    printf("the absolute value of integer is =  %d",n);
    return 0;
}