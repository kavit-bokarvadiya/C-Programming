// basics of function

/*#include<stdio.h>
void greet() // second function  (3), (9)
{
    printf("good morning\n");  // (4), (10)
    printf("how are you?\n");  // (5), (11)
    return; // (6), (12)
}
int main() // main function (1), (7), (13)
{
    greet(); // call first time to greet function   (2)
    greet(); // (8) function call
    return 0; // (14)
}*/

// basic function 2

#include<stdio.h>
void australia()
{
    printf("you are in australia\n");
    return;
}
void england()
{
    printf("you are in england\n");
    australia();
    return;
}
void india()
{
    printf("you are in india\n");
    england();
    return;
}
int main()
{
    india();
    return 0;
}