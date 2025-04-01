// pass by value & pass by reference

// this program is not working

/*#include<stdio.h>
int swap(int m,int n)
{
    int o;
    o = m;
    m = n;
    n = o;
    return m,n;
}
int main()
{
    int m,n;
    printf("enter a number: ");
    scanf("%d",&m);
    printf("enter a number: ");
    scanf("%d",&n);
    int num = swap(m,n);
    printf("%d %d",m,n);
    return 0;
}*/

//so using(pointer)

// pass by reference --> pass (addresh) from function to main function using pointer 

// heading (formal perameters and actual perameters)

/*int main()
{
    int m,n;
    printf("enter a number: ");
    scanf("%d",&m);
    printf("enter a number: ");
    scanf("%d",&n);
    int num = swap(m,n);

// m,n are formal perameters not a value (but number 2 & 9 is a actual perameters)

    printf("%d %d",m,n);
    return 0;
}*/

// *pointers and pass by reference(addresh)*

/*
-->> pointer aaek aesi cheej hoti he ki koi bhi variable ka addresh stote karta he

move from pointer folder
*/