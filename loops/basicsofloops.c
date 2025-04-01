//ques : print hello world 'n' times. take 'n' as input from user.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    // int i = 1; --> (initilization)

    // i <= n; --> (condition)

    // i++ / i--; --> (updation / increament, decrement)

    for (int i = 1; i <= n; i++)
    { // (1 - condition check, 2 - enter into the loop, 3 - updation / increment, decrement)
        printf("\nhello world");
    }
    return 0;
}*/

//ques : print hello world 'n' times. take 'n' as input from user and use a updation is i = i + 2

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n;i = i + 2)
    {
        printf("\nhello world");
    }
    return 0;
}*/

//ques : print number from 1 to 100 in different line.

/*#include<stdio.h>
int main()
{
    int n, i;
    printf("enter a first number: ");
    scanf("%d", &i);
    printf("enter a number: ");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        printf("\n%d", i);
    }
    return 0;
}*/

//ques : print all even number from 1 to 100

/*#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("your even number is: ");
    for (int i = 2; i <= 100; i = i + 2)
    {
        printf("\n%d", i);
    }
    return 0;
}*/

//ques : print all even number from 1 to 100. using if-else statement

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (int i = 2; i <= 100; i = i + 2)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int j = 1; j <= 100; j = j + 2)
        {
            printf("%d ", j);
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}*/

//ques : print all odd number from 1 to 100. using if-else statement

/*#include<stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}*/