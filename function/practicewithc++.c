// absolute value

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     if (n > 0)
//     {
//         printf("%d",n);
//     }
//     else
//     {
//         printf("%d",-n);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     if(n < 0)
//     {
//         n = -n;
//     }
//     printf("%d",n);
//     return 0;
// }

// #include<stdio.h>
// int fun(int n)
// {
//     return (n<0);
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int b = fun(n);
//     if (b == 1)
//     {
//         n = -n;
//         printf("%d",n);
//     }
//     else
//     {
//         printf("%d",n);
//     }
//     return 0;
// }

// take positive integer input and tell if it is divisible by 5 or 3.

// #include<stdio.h>
// int fun(int n)
// {
//     return (n % 5 == 0 && n % 3 == 0); // return 1
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int m = fun(n);
//     if(m == 1)
//     {
//         printf("divisible");
//     }
//     else
//     {
//         printf("not divisible");
//     }
//     return 0;
// }

// take 3 posotive integer input and print the greatest of them.(using loop and array)

// #include<stdio.h>
// int main()
// {
//     int arr [3];
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("enter %d value: ",i + 1);
//         scanf("%d",&arr[i]);
//     }
//     if (arr[0]>arr[1] && arr[0]>arr[2])
//     {
//         printf("%d",arr[0]);
//     }
//     else if (arr[1]>arr[0] && arr[1]>arr[2])
//     {
//         printf("%d",arr[1]);
//     }
//     else
//     {
//         printf("%d",arr[2]);
//     }
//     return 0;
// }

// take 3 posotive integer input and print the greatest of them.(using loop, array and function)

#include<stdio.h>
int fun(int a, int b, int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a,b,c;
    printf("enter a 1st value: ");
    scanf("%d",&a);
    printf("enter a 2nd value: ");
    scanf("%d",&b);
    printf("enter a 3rd value: ");
    scanf("%d",&c);
    int d = fun(a,b,c);
    printf("%d",d);
    return 0;
}