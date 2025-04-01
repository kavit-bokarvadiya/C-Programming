// square of number

/*#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("the square root is: %d", root);
    return 0;
}*/

// power of the number

#include<stdio.h> // liberary of input and output function
#include<math.h> // liberary of mathmatics tools
int main()
{
    int a, b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number of power: ");
    scanf("%d",&b);
    int power = pow(a, b); // pow(a , b); is basically function.
    printf("the power of your number is: %d",power);
    return 0;
}