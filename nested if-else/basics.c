// if-else ke andar if-else

// ques: (take positive integer input and tell if it is a divisible 5 and 3)

/*#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("the number is divisible by 5 and 3");
        }
        else
        {
            printf("the number is only divisible by 5");
        }    
    }
    else
    {
        printf("the number is not divisible by 5 and 3");
    }
    return 0;
}*/

// ques: (take positive integer input and tell if it is a divisible 5 and 3 but not divisible by 15)
// comperasation: (n % 5 == 0 || n % 3 == 0 && n % 5 != 0) -- && priority > || so write ((n % 5 == 0 || n % 3 == 0) && n % 5 != 0)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("it is divisible by 5 and 3 but not divisible by 15");
        }
        else
        {
            printf("it is divisible by 5, 3 and 15");
        }
        
    }
    else
    {
        printf("it is not divisible by 5 and 3 but divisible by 15");
    }
    return 0;
}*/

// ques: (take positive 3 integer input and print the greatest of them)

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a first value: ");
    scanf("%d", &a);
    printf("enter a second value: ");
    scanf("%d", &b);
    printf("enter a third value: ");
    scanf("%d", &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is gretest than %d and %d",a,b,c);
        }
        else
        {
            printf("%d is gretest than %d and %d",c,a,b);
        }
        
    }
    else
    {
        if (b>a)
        {
            printf("%d is gretest than %d and %d",b,a,c);
        }
        else
        {
            printf("%d is greatest than %d and %d",c,a,b);
        }
                
    }
    return 0;
}