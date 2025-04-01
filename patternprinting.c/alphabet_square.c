/* que : 3 (enter only single input from user)

enter a number of raw and coloumn: 4
A B C D
A B C D
A B C D
A B C D

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
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", a);
            a += 1;
        }
        printf("\n");
    }
    return 0;
}