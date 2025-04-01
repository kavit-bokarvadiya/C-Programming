// print the given pattern

/*enter a number of raw: 4
      # # # #
    # # # #
  # # # #
# # # #
*/

#include<stdio.h>
int main()
{
    int n, m;
    printf("enter a number of raw: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        for (int l = 1; l <= n - i; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}