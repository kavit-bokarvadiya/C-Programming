/* que : 3 (enter only single input from user)

enter a number of raw and coloumn: 5
1
AB
123
ABCD
12345

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
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ",a);
                a += 1;
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}