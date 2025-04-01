// ques: print the given pattern(stat triangle)

/*

enter raw and coloumn: 4
*
**
***
****

*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) // outer loop -> print a raw (lines)
    {
        for (int j = 1; j <= i; j++) // inner loop -> print a coloumn
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


