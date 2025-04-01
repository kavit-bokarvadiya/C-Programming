// ques: combination and permutations

// find out the nCr and nPr

// value of nCr is nCr = n! / r! * (n - r)!

// program make using for loop and only main function
/*#include<stdio.h>
int main()
{
    int n ,r;
    printf("enter a number of n: ");
    scanf("%d",&n);
    printf("enter a number of r: ");
    scanf("%d",&r);
    int nfactorial = 1; // n!
    int rfactorial = 1; // r!
    int nrfactorial = 1; // n - r!
    for (int i = 1; i <= n; i++) // for n!
    {
        nfactorial = nfactorial * i;
    }
    for (int j = 1; j <= r; j++) // for r!
    {
        rfactorial = rfactorial * j;
    }
    for (int k = 1; k <= n - r; k++) // for n - r! 
    {
        nrfactorial = nrfactorial * k;
    }
    int nCr = nfactorial / (rfactorial * nrfactorial);
    printf("the value of nCr is: %d",nCr);
    return 0;
}*/

// program make using loop and function

#include<stdio.h>
int factorial(int n)
{
    int y = 1;
    for (int i = 1; i <= n; i++)
    {
        y = y * i;
    }
    return y;
}
int main()
{
    int n, r;
    printf("entre n: ");
    scanf("%d",&n);
    printf("enter r: ");
    scanf("%d",&r);
    int nfactorial = factorial(n);
    int rfactorial = factorial(r);
    int nrfactorial = factorial(n - r);
    int ncr = nfactorial / (rfactorial * nrfactorial);
    printf("the value of nfactorial is: %d\n",nfactorial);
    printf("the value of rfactorial is: %d\n",rfactorial);
    printf("the value of nrfactorial is: %d\n",nrfactorial);
    printf("the value of nCr is: %d",ncr);
    return 0;
}