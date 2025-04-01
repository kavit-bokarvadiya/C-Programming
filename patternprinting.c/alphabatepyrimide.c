// print the given pattern

/* enter a number of raw and coloumn: 4
      A
    A B C
  A B C D E
A B C D E F G
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}