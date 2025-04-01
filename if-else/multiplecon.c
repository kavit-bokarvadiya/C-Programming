// ques: (write a prigram the number is bigger the 5 or not)
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n > 5)
    {
        printf("your number is bigger than 5");
    }
    else
    {
        printf("your number is smaller than 5");
    }
    return 0;
}*/

// ques: (write a prigram the number is bigger than 5 and smaller than 10)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n > 5 && n < 10)
    {
        printf("the number is bigger than 5 and smaller than 10");
    }
    else
    {
        printf("the number is smaller than 5 ane bigger than 10");
    }
    return 0;
}*/

// ques: (take positive integer input and tell if it is a three digit number or not)// using logical operator

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n > 99 && n < 1000)
    {
        printf("it is a three digit number");
    }
    else{
        printf("it is a not a three digit number");
    }
    return 0;
}*/

// ques: (take positive integer input and tell if it is a divisible 5 and 3)

/*#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("it is a divisible by 5 and 3");
    }
    else
    {
        printf("it is a not diviible by 5 and 3");
    }
    return 0;
}*/

// ques: (take 3 positive integer input and print gretest of them)

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number first: ");
    scanf("%d", &a);
    printf("enter a number second: ");
    scanf("%d", &b);
    printf("enter a number third: ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
    printf("%d is gretest then %d & %d", a,b,c);
    }
    if(b>a && b>c)
    {
    printf("%d is gretest then %d & %d", b,a,c);
    }
    if(c>a && c>b)
    {
    printf("%d is gretest then %d & %d", c,a,b);
    }
    return 0;
}*/

// ques: (take 4 positive integer input and print gretest of them)

/*#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter a number first: ");
    scanf("%d", &a);
    printf("enter a number second: ");
    scanf("%d", &b);
    printf("enter a number third: ");
    scanf("%d", &c);
    printf("enter a number fourth: ");
    scanf("%d", &d);
    if(a>b && a>c && a>d)
    {
    printf("%d is gretest then %d & %d & %d", a,b,c,d);
    }
    if(b>a && b>c && b>d)
    {
    printf("%d is gretest then %d & %d & %d", b,a,c,d);
    }
    if(c>a && c>b && c>d)
    {
    printf("%d is gretest then %d & %d & %d", c,a,b,d);
    }
    if(d>a && d>b && d>c)
    {
    printf("%d is gretest then %d & %d & %d", d,a,b,c);
    }
    return 0;
}*/

// ques: (take 3 positive integer input and tell if they can be the sides of a triangle)

/*#include<stdio.h> // (a + b > c, b + c > a, a + c > b)  
int main()
{
    int a, b, c;
    printf("enter a first side of an tringle: ");  
    scanf("%d",&a);
    printf("enter a second side of an tringle: ");
    scanf("%d",&b);
    printf("enter a third side of an tringle: ");
    scanf("%d",&c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }
    return 0;
}*/

// ques: (ram, shyam, ajay age print greatest age)

/*#include<stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter a age of ram: ");
    scanf("%d", &ram);
    printf("enter a age of shyam: ");
    scanf("%d", &shyam);
    printf("enter a age of ajay: ");
    scanf("%d", &ajay);
    if(ram>shyam && ram>ajay)
    {
    printf("%d is gretest then %d & %d", ram,shyam,ajay);
    }
    if(shyam>ram && shyam>ajay)
    {
    printf("%d is gretest then %d & %d", shyam,ram,ajay);
    }
    if(ajay>ram && ajay>shyam)
    {
    printf("%d is gretest then %d & %d", ajay,ram,shyam);
    }
    return 0;
}*/

