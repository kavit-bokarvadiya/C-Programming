// ques: table of 19

/*#include<stdio.h>
int main()
{
    int n, i;
    printf("enter a table number: ");
    scanf("%d", &i);
    printf("enter a last number of table: ");
    scanf("%d", &n);
    for (i; i <= n; i = i + 19)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

// ques: print the table of 'n'. here 'n' is a integer which uses will input.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("your table is:\n");
    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("%d\n", i);
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int a = 19, b = 1;
    for (int i = 19; i <= 190; i++)
    {
        if (i % 19 == 0)
        {
            printf("%d %d %d\n",a,b,i);
            b++;
        }
    }
    return 0;
}