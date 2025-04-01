/* 
-->> break is a key-word.
-->> break can be used either in (loop's body or switch's body).
-->> in loop, break is used to terminate execution of loop
*/

// define a game like program, in which user has to enter an even number to win the game.user will get at most 3 chances.

/*#include<stdio.h>
int main()
{
    int n, i;
    for (i = 1; i <= 3; i++)
    {
        printf("enter an even number: ");
        scanf("%d",&n);
        if (n % 2 == 0)
        {
            break;
        }
    }
    if(i == 4)
    {
        printf("game over");
    }
    else
    {
        printf("you winn");
    }
    return 0;
}*/

// find output

/*#include<stdio.h>
int main()
{
    int x = 5;
    do
    {
        printf("%d",x);
        x--;
    } while (x > 4);
    return 0;
}*/

// find the output.

#include<stdio.h>
int main()
{
    int i, j;
    for (int i = 1, j = 10; i < j; i++, j--)
    {
        if ( i == j)
        {
            break;
        }
        printf("%d ",i + j);
    }
    return 0;
}