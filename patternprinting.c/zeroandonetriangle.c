/* que : print the pattern (method: 1)

/*enter a  number of raw and coloumn: 4
1
0 1
1 0 1
0 1 0 1

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a  number of raw and coloumn: ");
    scanf("%d",&n);
    int a; // alag se aek variable
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // i is odd than store a = 1
        {
            a = 1;
        }
        else a = 0; // i is even than store a = 0
        for (int j = 1; j <= i; j++) // j run upto i variable
        {
            printf("%d ",a); // a ko print kar do
            if (a == 0) // agar a 0 k barabr he 
            {
                a = 1; //than a ko 1 kar do
            }
            else a = 0; // agar a is equal to 1 than print a = 0
        }
        printf("\n"); // line change
    }
    return 0;
}*/

/* que : 2 (enter only single input from user)

/*enter a number of raw and column: 5
0 
1 0 
0 1 0 
1 0 1 0 
0 1 0 1 0 

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and column: ");
    scanf("%d",&n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // starting
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
            if (a == 0) // switching
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        printf("\n");
    }
    return 0;
}*/

// (method : 2)

/*

enter a number of raw and coloumn: 4
1
0 1
1 0 1
0 1 0 1

*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0) // modules priority is more than plus or arithmatic oprator
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}