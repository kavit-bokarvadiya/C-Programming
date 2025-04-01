// print the given pattern

/* enter a number of raw and coloumn: 5
        A 
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
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
        char b = i + 'A' - 2;
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ",a);
            a++;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            printf("%c ", b);
            b--;
        }
        printf("\n");
    }
    return 0;
}