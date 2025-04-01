// nested loop

// (1) nested for loop.

/*#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) // run 5 times
    {
        for (int j = 1; j <= 10; j++) // run 10 times
        {
            printf("%d hello\n", j); // run 5 * 10 = 50 times
        }
        printf("\n"); // run 5 times
    }
    return 0;
}*/

// (2) nested for and while loop.

/*#include<stdio.h>
int main()
{
    int i = 1;
    while(i <= 5) // run 5 times
    {
        for (int j = 1; j <= 10; j++) // run 10 times
        {
            printf("%d hello\n", j); // run 50 times
        }
        i++;
        printf("\n"); // run 5 times
    }
    return 0;
}*/

// predict the output
/*
1 2 3 4 5 6 7 8 9 10 
2 4 6 8 10 12 14 16 18 20 
3 6 9 12 15 18 21 24 27 30
4 8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50
6 12 18 24 30 36 42 48 54 60
7 14 21 28 35 42 49 56 63 70
8 16 24 32 40 48 56 64 72 80
9 18 27 36 45 54 63 72 81 90
10 20 30 40 50 60 70 80 90 100
*/

/*
#include<stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ",i * j);
        }
        printf("\n");
    }
    return 0;
}
*/

// star pattern (basic skeleton).

/*#include<stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++) // run 3 times. (for raw)
    {
        for (int j = 1; j <= 6 + 1 - i; j++) // run 4 times. (for coloumn)
        {
            printf("* ");
        }
        printf("\n"); // run 3 times.
    }
    return 0;
}*/

