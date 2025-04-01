// ques: print the given pattern
/*
enter number of raw and coloumn: 4
1
12
123
1234
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/

// ques: print the given pattern
/*

enter number of raw and coloumn: 4
1234
123
12
1

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/


// ques: print the given pattern
/*

enter number of raw and coloumn: 4
1
13
135
1357

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
            a += 2;
        }
        printf("\n");
    }
    return 0;
}*/

// ques: print the given pattern
/*
enter a number of raw and column: 4
1
23
456
78910
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and column: ");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a);
            a += 1;
        }
        printf("\n");
    }
    return 0;
}*/