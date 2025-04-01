// print the given pattern

/* enter a number of raw and coloumn: 4
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        int b = i - 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d ",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}
