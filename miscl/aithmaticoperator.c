// #include<stdio.h>
// int main()
// {

//     /*float a, b, c;
//     printf("enter a value of b: ");
//     scanf("%f", &b);
//     printf("enter a value of c: ");
//     scanf("%f", &c);
//     a = b+c;
//     printf("ans of a is: %f", a);
//     return 0;*/

//     /*int a = 7;
//     a = a++; // output will be 7 (what is the reason plz find out)
//     printf ("%d", a);
//     return 0;*/

//     /*int a = 7;
//     a = ++a; // output will be 8 (what is the reason plz find out) (this operator don't work with number only work with variable)
//     printf ("%d", a);
//     return 0;*/

//     int a = 7;
//     printf ("%d", ++a);
//     return 0;
// }   

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     bool p = false;
//     bool q = false;
//     bool r = true;
//     printf("%d",p == q == r);
//     return 0;
// }

// take float input and print the fractional part of the real number

// #include<stdio.h>
// int main()
// {
//     float a,c;
//     printf("enter a decimal number: ");
//     scanf("%f",&a);
//     int b = (int)a;
//     printf("fractional part is = %f",c = a - b);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}