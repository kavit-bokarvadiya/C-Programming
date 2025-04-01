// basic program (sum of 2 number)

/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a first number: ");
    scanf("%d",&a);
    printf("enter a second number: ");
    scanf("%d",&b);
    c = a + b;
    printf("%d",c);
    return 0;
}*/ 

// simple code transfer into function (hiw to perform function)

#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a,b;
    printf("enter a 1st number: ");
    scanf("%d", &a);
    printf("enter a 2nd number: ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum of two number is : %d\n",sum);
    return 0;
}

/*#include<stdio.h>
int addition(int n, int m) // int addition() --> function, (int n, int m) --> argument perameter
// int is return type and aṇddition is function
{ 
    return n + m; // return from calling addresh with addition
}
int multliplication(int n, int m)
// int is return type and multliplication is function
{
    return n * m;
}
int main()
{
    int n,m;
    printf("enter a 1st number: ");
    scanf("%d",&n);
    printf("enter a 2nd number: ");
    scanf("%d",&m);
    int sum = addition(n,m); // pass by value from function
    int into = multliplication(n,m);
    printf("the sum of two number is: %d\n", sum);
    printf("the multliplication of two number is: %d", into);
    return 0;
}*/