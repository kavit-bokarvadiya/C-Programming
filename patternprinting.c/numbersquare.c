/* que : 3 (enter only single input from user)
enter number of raw and coloumn: 4

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

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
            printf("%d ", j);
        }
        printf("\n"); // present in outer loop for har line k bad enter k lia.
    }
    return 0;
}*/

/* que : 4 (enter only single input from user)

enter a number of raw and coloumn: 4
1 3 5 7
1 3 5 7
1 3 5 7
1 3 5 7

*/

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number of raw and coloumn: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int c = 1;
        for (int j = 1; j <= a; j++)
        {
            printf("%d ",c);
            c += 2;
        }
        printf("\n");
    }
    return 0;
}
