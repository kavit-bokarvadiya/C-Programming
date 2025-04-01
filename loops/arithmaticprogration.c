// ques: display this AP - 1,3,5,7,9... upto 'n' terms.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a + 2;
    }
    return 0;
}*/

// solve by mathmatics (odd ap)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: "); // n is  nth term formula An = 1 + (n - 1) * 2(difference) = (2n - 1)...basically n should be common difference
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}*/

// hw : display this AP - 4,7,10,13,16.... upto 'n' terms.

/*#include<stdio.h>
int main()
{
    int n, a;
    printf("enter a starting number of ap: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = a; i <= 3 * n - 1; i = i + 3)
    {
        printf("%d\n", i);
    }
    return 0;
}*/

// with out maths

/*#include<stdio.h>
int main()
{
    int n; // itni bar loop chalega
    printf("enter a number: ");
    scanf("%d", &n);
    // we are going to use extra variables
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a + 3;
    }
    return 0;
}*/

//user input

/*#include<stdio.h>
int main()
{
    int a, n;
    printf("enter a number of starting of ap: ");
    scanf("%d", &a);
    printf("enter a number of starting of nth term ap: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a + 3;
    }
    return 0;
}*/

// ques: display this ap - 100,97,94,.... upto 'n' terms which is positive.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a nth term of ap: ");
    scanf("%d", &n);
    int a = 100;
    for (int i = 1;a>0; i++) // stoping the nth value (a>0) or (i <= 34)
    {
        printf("%d\n", a);
        a = a - 3;
    }
    return 0;
}*/

// ques: display this ap - 100,50,25,12.5.... upto 'n' terms which is positive. (multiple by 1/2)

/*#include<stdio.h>
int main()
{
    float n;
    printf("enter a number: ");
    scanf("%f",&n);
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", a);
        a = a / 2; // or a * 1/2
    }
    return 0;
}*/

// display this ap - 100,97,94,... upto all terms which are positive.

#include<stdio.h>
int main()
{
    int n, a = 100;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a -= 3;
    }
    return 0;
}