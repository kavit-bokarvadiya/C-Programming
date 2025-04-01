/*#include<stdio.h> // take a positive integer and tell 3 digit or not
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a>99 && a<1000)
    {
        printf("three digit number");
    }
    else
    {
        printf("it is  not a three digit number");
    }
    
    return 0;
}*/

//take a positive integer input and tell if it is divisible by 5 and 3

/*#include<stdio.h>
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d", &a);
    if(a % 5 == 0 && a % 3 == 0)
    {
        printf("it is divisible by 5 and 3");
    }
    else
    {
        printf("it is not divisible by 5 and 3");
    }
    return 0;
}*/

//take a positive integer input and tell if it is divisible by 5 or 3

/*#include<stdio.h>
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d", &a);
    if(a % 5 == 0 || a % 3 == 0)
    {
        printf("it is divisible by 5 and 3");
    }
    else
    {
        printf("it is not divisible by 5 and 3");
    }
    return 0;
}*/

//take a positive 3 integer input and print the gretest of them

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is grater then b and c");
    }
    if (b > a && b > c)
    {
        printf("b is grater then a and c");
    }
    if (c > a && c > b)
    {
        printf("c is grater then b and a");
    }
    if (a == b & c)
    {
        printf("a, b and c all is");
    }
    return 0;
}