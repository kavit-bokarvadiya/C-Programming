/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a naumber:");
    scanf("%d",&n);
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            printf("the number is divisible by 5 and 3");
        }
        else
        {
            printf("the number is not divisible by 5");
        }
    }
    else
    {
        printf("the number is not divisible by 5 and 3");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 == 0)
        {
            printf("the number is divisible by 5, 3 and 15");
        }
        else
        {
            printf("the number is not divisible by 15");
        }
    }
    else
    {
        printf("the number is not divisible by 15,3,5");
    }
    
    return 0;
}