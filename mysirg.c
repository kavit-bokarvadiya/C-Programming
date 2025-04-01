//logic building (lacture - (1) - o/p and i/p)

/*#include<stdio.h>
int main()
{
    printf("\"mysirg\""); //escape sequences
    return 0;
}*/

// o/p: value of x is 5

/*#include<stdio.h>
int main()
{
    int x = 5;
    printf("value of x is %d",x);
    return 0;
}*/

// o/p: sum of 5 and 6 is 11

/*#include<stdio.h>
int main()
{
    int x = 5,y = 6;
    printf("sum of %d and %d is %d",x,y,x+y);
    return 0;
}*/

// WAP a program which take one character from keybord using getch() function and display its ASCII code

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter a chacter: ");
    ch = getch();
    printf("\nThe ASCII code is: %d",ch);
    return 0;
}*/

// logic building (lacture - (2) - operators)

// que: WAP a c program to calculate area of circle input by user. AREA = pi(r)2

/*#include<stdio.h>
int main()
{
    float area, pi = 3.141592653589793238462643383279502884197, r;
    printf("enter a value of radius: ");
    scanf("%f",&r);
    area = pi * r * r;
    printf("the area of circle is: %f",area);
    return 0;
}*/

//que: WAP to calculate average of three numbers

/*#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter a first value: ");
    scanf("%f",&a);
    printf("enter a second value: ");
    scanf("%f",&b);
    printf("enter a third value: ");
    scanf("%f",&c);
    d = (a+b+c)/3; // check a operator
    printf("the average of three number is: %f",d);
    return 0;
}*/

//que: WAP a program to print only last digit of a given number.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n = n % 10;
    printf("your last digit is: %d",n);
    return 0;
}*/

// que : WAP to swap values of two int type variable

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a value of a: ");
    scanf("%d", &a);
    printf("enter a value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("the swaping value of a and b is: %d %d",a,b);
    return 0;
}*/

// que: WAP to check whether a given number is positive or non positive 

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("positive number");
    }
    if (n<0)
    {
        printf("non positive number");
    }
    if (n==0) // zero is non positive number
    {
        printf("zero");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("positive number");
    }
    else if(n == 0)
    {
        printf("zero");
    }
    else
    {
        printf("non positive number");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("positive number");
    }
    else
    {
        printf("non positive number");
    }
    return 0;
}*/

// conditional operator (ternary operator)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n>0 ? printf("positive") : printf("non positive");
    return 0;
}*/

// WAP to check whether a given number is divisible by 5 or not

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n % 5 == 0)
    {
        printf("the number is divisible by 5");
    }
    else
    {
        printf("the number is not divisible by 5");
    }
    return 0;
}*/

// According to true or false

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n % 5)  // According to true or false
    {
        printf("the number is not divisible by 5");
    }
    else
    {
        printf("the number is divisible by 5");
    }
    return 0;
}*/

// check even or odd

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n % 2)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }
    return 0;
}*/

// wap to swap value of two int variable without using third variable

/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a 1st value: ");
    scanf("%d",&a);
    printf("enter a 2nd value: ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the swap value is: %d %d",a,b);
    return 0;
}*/

// que: how to remove last digit from a given number

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n = n / 10;
    printf("without last digit number is: %d",n);
    return 0;
}*/

// WAP to check whether a given number is divisible by 3 and 2

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n % 3 && n % 2) // logical end
    {
        printf("number is not dibisible by 2 and 3");
    }
    else
    {
        printf("divisible by 3 and 2");
    }
    return 0;
}*/

// WAP to check whether a given number is divisible by 7 or 3

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n % 7 == 0 || n % 3 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n = 1;
    while (n <= 5)
    {
        printf("like karo\n");
        n++;
    }
    return 0;
}*/

// find the output

/*
#include<stdio.h>
int main()
{
    int x = 3,y = 4;
    while (x<y)
    {
        printf("%d\n",x + y);
        y  = y - x;
        x = y - x;
    }
    return 0;
}
*/

// print first 10 natural number.

/*#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}*/

// input by user.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int i = 1;
    while (i <= n)
    {
        printf("%d ",i);
        i += 1;
    }
    return 0;
}*/

// predict the output. (infinite 10 loop)

/*#include<stdio.h>
int main()
{
    int i = 10;
    while (i) // every non-zero value id (true) and every zero value is false (so this condition is true)
    {
        printf("%d ",i);
        i - 1; // i is not asign in i. or asign karne k lia i = i - 1 or i =- 1 or i-- likhna padta hai.
    }
    return 0;
}*/

// write a program to print (first 10 even natural number).

/*#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 20)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i = 2;
    while(i <= 20)
    {
        printf("%d ",i);
        i += 2;
    }
    return 0;
}*/

// that's good.
 
/*#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int i = 1;
    while (i <= n)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}*/

// find the output.

/*#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ",11 - i);
        i++;
    }
    return 0;
}*/

// print first n odd natural number in reverse order.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int i = 1;
    while (i<=n)
    {
        printf("%d ",2 * n + 1 - 2 * i);
        i++;
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("%d",a);
}