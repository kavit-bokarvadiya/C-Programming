// use for function any place fixed

#include<stdio.h>
void pucket()
{
    printf("you are in pucket\n");
    return;
}
void india()
{
    void canada();
    printf("you are in india\n"); // function prototype
    canada();
    return;
}
void canada()
{
    printf("you are in canada\n");
    pucket();
    return;
}
int main()
{
    void india(); // function prototype 
    india();
    return 0;
}