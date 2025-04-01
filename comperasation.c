/*#include<stdio.h>
int main()
{
    printf("nn\n\nnn\n");
    printf("nn/n/nnn/n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a = 4, b = 3, c = a + b;
    printf("%d\n",a);
    printf("%d\n",c);
    printf("4+3",a,b);
    return 0;
}*/

//same code
/*#include<stdio.h>
int main()
{
    //int a = 4, b = 3, c = a + b;
    printf("%d\n",4);
    printf("%d\n",4+3);
    printf("4+3");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    float a = 5,b = 2;
    float c = a / b;
    printf("%f",c);
    return 0;
}*/

#include<stdio.h>
int main()
{
    float a, c;
    printf("enter a number: ");
    scanf("%f",&a);
    int b = (int)a;
    c = a - b;
    printf("the fractional part of real number is: ",c);
    return 0;
}