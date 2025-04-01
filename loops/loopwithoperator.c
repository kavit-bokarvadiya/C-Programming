//ques: wap to count digits of a given number.

// # hint: (1) using / operator (2) 19325/10 = 1932

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("the total number is: %d", count);
    return 0;
}*/

//ques: wap to print sum of digits of a given number

//hint: 12345 % 10 = 5, 1234 % 10 = 4...

//program:

/*#include<stdio.h>
int main()
{
    printf("%d",12345%10);
    return 0;
}*/  // ans will be: 5

/*#include<stdio.h>
int main()
{
    printf("%d", 11346 / 10);
    return 0;
}*/   // ans will be: 1134

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int ld;
    while (n != 0)
    {
        ld = n % 10; // that is alwyas give a last digit
        sum  = sum + ld;
        n = n / 10; // that is alwyas remove last digit
    }
    printf("the sum of digits are: %d", sum);
    return 0;
}*/

// hw : wap to print sum of all the even/odd digit of a given number.

//que: WAP to print reverse of a given number and store it 

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + (n % 10);
        n = n/10;
    }
    printf("the reverse number is: %d", reverse);
    return 0;
}*/

//ques: wap to print sum of digits of a given number (vichrine / dry run)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("the sum is: %d",sum);
    return 0;
}*/

// hw : wap to print sum of all the even/odd digit of a given number.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int lastdigit = 0;
    int sum = 0;
    int i = 0;
    if(n % 2 == 0)
    {
        while (n>0)
        {
            n = n / 10;
            lastdigit = n % 10;
            sum = sum + lastdigit;
        }
    }
    printf("the sum of even number is: %d",sum);
    return 0;
}*/

// WAP to print sum of n number

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}*/

// WAP to print sum of even number of ap

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ",i);
            sum = sum + i; 
        } 
    }
    printf("the sum is: %d",sum);
    return 0;
}*/

// factorial

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d",factorial);
    return 0;
}*/

// ques: fibonacci

// ques: power

// print aschii value

/*#include<stdio.h>
int main()
{
    int n ;
    printf("enter a value: ");
    scanf("%d",&n);
    char ch;
    for (int i = 0; i <= n - 1; i++)
    {
        ch = 'A' + i;
        printf("The %c aschii value is %d \n",ch,ch);
    }
    return 0;
}*/