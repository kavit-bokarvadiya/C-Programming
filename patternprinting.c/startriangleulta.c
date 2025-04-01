// ques: print the given pattern(stat triangle)


/*enter a raw and coloumn: 4
****
***
**
*

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// using extra variable

#include<stdio.h>
int main()
{
    int n;
    printf("enter raw and coloumn: ");
    scanf("%d",&n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}