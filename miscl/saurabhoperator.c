#include<stdio.h>
int main()
{
    /*int a = 5;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    ++a;
    printf("%d\n", a);
    a--;
    printf("%d", a);
    return 0;*/

    //question

    int x = 5, y;
    y = x++; // opertator priority: (assignment operator)= > ++(post increment operator)
    printf("%d %d", x, y);
    return 0;
} 