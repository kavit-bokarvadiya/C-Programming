// que : wap to check if a number is prime or not.

// prime number : the number is n. so this n number factor is n or 1. called prime number
// composite : that is divided by other number

// prime number

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     for ( i = 2; i <= n - 1; i++)
//     {
//         if(n % i == 0)
//         {
//             break;
//         }
//     }
//         if(i == n)
//         {
//             printf("prime");
//         }
//         else 
//             printf("not prime");
//         printf("\n");
    
//     return 0;
// }

// using a extra variable

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if(n%i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n==1) 
    {
        printf("1 is neither prime nor composite");
    }
    else if (a == 0)
    {
        printf("the given number is prime");
    }
    else
    {
        printf("the given number is composite");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n, m;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            m = 0;
            break;
        }
    }
    if ( n==1 )
    {
        printf("1 is neither prime nor composite");
    }
    else if (m == 0)
    {
        printf("composite number");
    }
    else
    {
        printf("prime number");
    }
    return 0;
}