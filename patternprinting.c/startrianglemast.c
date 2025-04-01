// using nested loop
/*
enter a number of raw and coloumn: 4
      $
    $ $
  $ $ $
$ $ $ $
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw and coloumn: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for spaces
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) // for doller sign
        {
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
}*/

// using nested loop
/*
enter a number of raw and coloumn: 4
      1
    1 2
  1 2 3
1 2 3 4
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
        for (int j = 1; j <= n - i; j++) // for spaces
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) // for number
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}