// pointer (use -->> use for store a addresh)
// pointer aek variable hai jo ki dusre variable ka addresh store karta hai


// (1) how to print a addresh

// normal program

/*
#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d",a); // print variable a value
    return 0;
}
*/

// print addresh of normal program

/*
-->> The format specifier for printing.
%d --> integer
%f --> float
%lf --> double
%c --> character
%p --> addresh (printing a pointer)

*/
/* 
#include<stdio.h>
int main()
{
    int n = 5;
    printf("%p",&n); // print a addresh of variable value (addresh-0061FF1C)
    return 0;
}
*/

// how to store addresh of variable value

// decelaration of pointer -->> (int* m) -->> store addresh -->> int* m = &n;
/*
#include<stdio.h>
int main()
{
    int n = 5;
    int* m = &n;
    printf("%p\n",m); // addresh store of n
    printf("%p\n",&m); // addresh print of pointer m
    printf("%d",*m); // pointing to the value of variable n and print the value of n
    return 0;
}
*/

// pointing to the value of variable n and print the value of n.

// khel of pointer

/*
#include<stdio.h>
int main()
{
    int n = 5;
    int* m = &n;
    printf("%d",*m);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int n = 5;
    int* m;
    m = &n;
    printf("%p\n",m); // addresh of store value of n
    printf("%p",&n); // adderesh of n
    return 0;
}
*/

// kya pointer ka variable value badal sakta hai?

// n or *m printf function will be same.

/*
#include<stdio.h>
int main()
{
    int n = 5;
    int* m = &n;
    *m = 10; // n is changed. (most important)
    printf("%d\n",n);
    printf("%d",*m);
    return 0;
}
*/