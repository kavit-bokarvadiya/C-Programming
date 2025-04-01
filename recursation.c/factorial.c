// basic program of factorial.

// (1) basic program
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac = fac * i;
//     }
//     printf("the number of factorial is: %d",fac);
//     return 0;
// }

// (2) using function
// #include<stdio.h>
// int factorial(int n)
// {
//     int m = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         m = m * i;
//     }
//     return m;
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int a = factorial(n);
//     printf("%d",a);
//     return 0;
// }

// (3) using function but not a loop.

#include<stdio.h>
int factorial(int n)
{
    if (n == 1 || n==0) return 1; // base case
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int a = factorial(n);
    printf("the factorial is: %d",a);
    return 0;
}