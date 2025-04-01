/* que : 3 (enter only single input from user)

enter a number of raw and coloumn: 5
       $
       $
 $  $  $  $  $
       $
       $

*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n / 2 + 1 || i == n / 2 + 1)
            {
                printf(" $ ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}