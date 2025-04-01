// solid ractangle

/* que : 1
enter number of raw: 3
enter number of coloumn: 5

* * * * *
* * * * *
* * * * *

*/

/*#include<stdio.h>
int main()
{
    int a, b;
    printf("enter number of raw: "); // for outer loop (print a number of lines)
    scanf("%d",&a);
    printf("enter number of coloumn: "); //for inner loop (print a number of stars)
    scanf("%d",&b);
    for (int i = 1; i <= a; i++) // outer loop -> no of linee = no of raws
    {
        for (int j = 1; j <= b; j++) // inner loop -> no of stars in each line = no of coloumns
        { 
            printf("* ");
        }
        printf("\n"); // har line k bad ek enter marne k lia (1 \n 2 \n 3)
    }
    return 0;
}*/

/* que : 2 (enter only single input from user)
enter number of raw and coloumn: 4

* * * *
* * * *
* * * *
* * * *

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number of raw and coloumn: "); // for  both outer and inner loop. 
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) // outer loop for raw
    {
        for (int j = 1; j <= n; j++) // inner loop for coloumns
        {
            printf("* ");
        }
        printf("\n"); // present in outer loop for har line k bad enter k lia.
    }
    return 0;
}*/

