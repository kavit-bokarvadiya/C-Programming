/* que : 2 (enter only single input from user)

/*enter a number of raw and coloumn: 4
1
2 3
4 5 6
7 8 9 10

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // condition: (j <= i)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}*/

/* que : 2 (enter only single input from user)

/*enter a number of raw and coloumn: 4
1
3 5
7 9 11
13 15 17 19

*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // condition: (j <= i)
        {
            printf("%d ",a);
            a += 2;
        }
        printf("\n");
    }
    return 0;
}