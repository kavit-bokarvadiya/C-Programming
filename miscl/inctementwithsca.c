#include<stdio.h>
int main()
{
    /*int a, b, c;
    printf("enter a value of a: ");
    scanf ("%d", &a);
    b = a++;
    printf("enter a value of b: ");
    scanf ("%d", &b);
    c = b++;
    printf("enter a value of c: ");
    scanf ("%d", &c);
    a = c++;//value of a  is: 3 value of b is: 3value of c is: 4(out out wiil be)
    printf("\nvalue of a  is: %d\n value of b is: %d\n value of c is: %d", a, b, c);
    return 0;*/

    int a, b, c;
    printf ("enter a value of a: ");
    ++a;
    scanf("%d", &a);
    printf ("enter a value of b ");
    ++b;
    scanf("%d", &b);
    c = ++a + ++b;
    printf("%d",c);
    return 0;
}