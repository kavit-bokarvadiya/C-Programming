// step - 1: print same array element.

// #include<stdio.h>
// int main()
// {
//     int arr [3] = {1,2,3};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// step - 2: print reverse array element.

// #include<stdio.h>
// int main()
// {
//     int arr [3] = {11,22,38};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ",arr[2 - i]);
//     }
//     return 0;
// }

// using fumction swap 2 numbers

// #include<stdio.h>
// int function(int n)
// {
//     int b = n;
//     return b;
// }
// int main()
// {
//     int n = 5;
//     int b = function(n);
//     printf("%d",b);
//     return 0;
// }

// passing array to function

// #include<stdio.h>
// int fun(int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         printf("%d ",i);
//     }
//     return n;
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int b = fun(n);
//     printf("%d",b);
//     return 0;
// }

// #include<stdio.h>
// int fun(int n)
// {
//     int arr [n];
//     int i;
//     for (i = 0; i <= n-1; i++)
//     {
//         printf("enter a element: ");
//         scanf("%d",&arr[i]);    
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return n;
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int b = fun(n);
//     printf("%d\n",b);
//     return 0;
// }

