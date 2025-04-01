// passing array to function

// #include<stdio.h>
// int fun(int n)
// {
//     return n + n;
// }
// int main()
// {
//     int n = 5;
//     int b = fun(n);
//     printf("%d",b);
//     return 0;
// }

// #include<stdio.h>
// void pakistan()
// {
//     printf("i m in pakistan"); // (6)
//     return; // return from canada (7)
// }
// void canada()
// {
//     printf("i m in canada\n"); // (4)
//     pakistan(); // callin from pakistan (5)
//     return; // return from india (8)
// }
// void india()
// {
//     printf("i m in india\n"); // print (2) 
//     canada(); // callin from canada (3)
//     return; // return from main (9)
// }
// int main()
// {
//     india(); // calling from india (1)
//     return 0; // khatam
// }

// #include<stdio.h>
// int fun(int n, int m) // (5) enter in the fun function  
// {
//     return m * n; // (6) return the value of n + m. here n = 8 and m = 18 
// }
// int main() // (1) enter in the main function
// {
//     int n = 8; // (2) make a 1st variable and variable value is 8
//     int m = 18; // (3) make a 2nd variable and variable value is 18
//     fun(n,m); // (4) pass this value to function 
//     int o = fun(n,m); // (7) return value store in the int o variable
//     printf("%d ",o); // (8) print the value of o variable
//     return 0;
// }

// print the 1 to 50 value.

// #include<stdio.h>
// int function(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         printf("%d ",i);
//     }
//     return a;
// }
// int main()
// {
//     int a = 50;
//     int fun = function(a);
//     printf("%d ",fun);
//     return 0;
// }

// input from user and print 50 integer using function

// #include<stdio.h>
// int function(int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         printf("%d ",i);;
//     }
//     return n;
// }
// int main()
// {
//     int n;
//     printf("enter a value: ");
//     scanf("%d",&n);
//     int m = function(n);
//     printf("%d",m);
//     return 0;
// }

// write a program usin function number is even or odd

// #include<stdio.h>
// int fun(int n)
// {
//     return n % 2;
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int m = fun(n);
//     if (m == 0)
//     {
//         printf("even number");
//     }
//     else
//     {
//         printf("odd number");
//     }
//     return 0;
// }

// take positive integer input and tell idf it is divisible by 5 or not.(using function)

// #include<stdio.h>
// int fun(int n)
// {
//     return (n % 5 == 0 && n % 3 == 0);
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     int m = fun(n);
//     if (m == 1)
//     {
//         printf("dividible");
//     }
//     else
//     {
//         printf("not divisible");
//     }
//     return 0;
// }


// write a array of 3 element and print the 2 number of element.

// #include<stdio.h>
// int main()
// {
//     int arr [3] = {1,2,3};
//     printf("%d",arr[1]);
//     return 0;
// }

// #include<stdio.h>
// int fun(int a)
// {
//     a = 13;
//     return a;
// }
// int main()
// {
//     int a = 5;
//     fun(a);
//     a = fun(a);
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     if (n % 2 == 0)
//     {
//         printf("even number");
//     }
//     else
//     {
//         printf("odd number");
//     }
//     return 0;
// }

