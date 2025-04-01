/*
  enter a number: 4
  enter a number: 7
   A B C D C B A
     A B C B A
       A B A
         A
         */
/*#include<stdio.h>
int main()
{
    int n,m;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a number: ");
    scanf("%d",&m);
    for (int i = 1; i <= n; i++)
    {
        char k = 'A';
        for (int j = 1; j <= m; j++)
        {
            if(j>=i && j<=m+1-i)
            {
                printf("%c ",k);
                j<n?k++:k--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// write a program to print the squares of first 10 natural numbers in reverse order.

/*
#include<stdio.h>
int main()
{
    int n;
    int a = 10;
    int m = 1;
    for (int i = 1; i <= 10; i++)
    {
        m = a * a;
        printf("%d ",m);
        a--;
    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d ",(11 - i) * (11 - i));
        i++;
    }
    return 0;
}*/

// write a program to check whether a given number is prime or not.

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            printf("prime number\n");
        }
        else if (n % i != 0)
        {
            printf("composite number\n");
        }
        
    }
    
    return 0;
}