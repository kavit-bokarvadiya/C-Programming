// pascal triangle

/*#include<stdio.h>
int factorial(int x)
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    return y; // return from combination function
}
int combination(int n, int r)
{
    int nCr = factorial(n)/(factorial(r)*factorial(n -r));
    return nCr; // return from main function
}
int main()
{
    int n,r;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter r: ");
    scanf("%d",&r);
    int ncr = combination(n,r); // pass to combination function
    printf("%d",ncr);
    return 0;
}*/

// using by nCr (n is raw and r is coloumn)

/*#include<stdio.h>
int factorial(int x) // value of n., r and n-r
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    return y; // return from combination function
}
int combination(int n, int r) // tet id value of i and j
{
    int nCr = factorial(n)/(factorial(r)*factorial(n -r)); // pass to factorial function
    return nCr; // return from main function
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i , j); // pass to combination function and // nCr value is store in icj variable
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}*/

// ultimate method (pascal triangle optimize)

#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}