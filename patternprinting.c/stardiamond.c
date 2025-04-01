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
    printf("enter a number of raw and colomn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("# ");
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("# ");
        }        
        printf(" \n");
    }
    return 0;
}