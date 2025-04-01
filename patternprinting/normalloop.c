/* normal loop */

/*#include<stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("*");
    }
    return 0;
}*/

/* pattern printing */  //(5*3) basically it's a nasted loop

/* ****
   ****
   ****
   ****
*/

/*#include<stdio.h>
int main()
{
    int raw, coloumn;
    printf("enter a raw: "); // (no of raw = no of lines) 
    scanf("%d", &raw);
    printf("enter a coloumn: "); // (no of coloumn = no of stars in each line)
    scanf("%d", &coloumn);
    for (int i = 1; i <= raw; i++) // (no of raw = no of lines) (main loop)
    {
        for (int i = 1; i <= coloumn; i++) // (no of coloumn = no of stars in each line) (inner loop)
        {
            printf("*");
        }
        printf("\n"); // (main loop syntex) har line k baad enter
    }
    return 0;
}*/

/*print the numbering pattern (star tringle)*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a raws: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}*/

/*print the numbering pattern (number squere)*/

/*#include<stdio.h>
int main()
{
    int raw;
    printf("enter a raw: ");
    scanf("%d", &raw);
    for (int i = 1 ; i <= raw ; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/

/*print the numbering pattern (number squere) - ulta*/

/*#include<stdio.h>
int main()
{
    int raw;
    printf("enter a number of raw: ");
    scanf("%d",&raw);
    for (int i = 1; i <= raw; i++)
    {
        for (int j = 1; j <= raw + 1 - i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}*/

/*number triangle second trick (to make a variable)*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw: ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d",j); 
            printf(" ");   
        }
        a--;
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int raw;
    printf("enter a number of raw: ");
    scanf("%d", &raw);
    for (int i = 1; i <= raw; i++)
    {
        for (char i = 'A'; i <= 'A' + raw - 1; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}*/

/* ****
   ***
   **
   *
 */

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/* 
   *
   **
   ***
   ****
*/

/*#include<stdio.h>
int main()
{
    int n, a;
    printf("enter a number: ");
    scanf("%d", &n);
    a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("* ");
        }
        a++;
        printf("\n");
    }
    return 0;
}*/

/* 1
   12
   123
   1234
*/

/*#include<stdio.h>
int main()
{
    int n, a;
    printf("enter a number: ");
    scanf("%d", &n);
    a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d", j);
        }
        a++;
        printf("\n");
    }
    
    return 0;
}*/

/* 
   1
   12
   123
   1234
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter aa number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}*/

/* 1
   13
   135
   1357
*/

/*according to arithmatic progration (ap)*/

/*#include<stdio.h>
int main()
{
    int n, a = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a = a + 2;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a = a + 2; 
        }
        printf("\n");
    }
    return 0;
}*/

/* 
   1357
   1357
   1357
   1357
*/

/*#include<stdio.h>
int main()
{
    int raw, coloumn;
    printf("enter a raw: ");
    scanf("%d", & raw);
    printf("enter a coloumn: ");
    scanf("%d", &coloumn);
    for (int i = 1; i <= raw; i++)
    {
        int a = 1;
        for (int j = 1; j <= coloumn; j++)
        {
            printf("%d", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}*/

/*
   1357
   135
   13
   1
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}*/

/*
4321
431
43
1
*/

/*#include<stdio.h>
int main()
{
    int n, a;
    printf("enter a number: ");
    scanf("%d", &n);
    a = n;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a--;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        a = n;
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    
    return 0;
}*/

/*
a
ab
abc
abcd
*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
        for (char j = 65; j <= 65 + a; j++)
        {
            printf("%c", j);
        }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (char j = 65; j <= 65 + i - 1; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}*/

/*
abcd
abcd
abcd
abcd
*/

/*#include<stdio.h>
int main()
{
    int raw, coloumn;
    printf("enter a number of raw: ");
    scanf("%d", &raw);
    printf("enter a number of coloumn: ");
    scanf("%d", &coloumn);
    for (int i = 1; i <= raw; i++)
    {
        int a = 65;
        for (char j = 1; j <= coloumn; j++)
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}*/

/*
abcd
abc
ab
a
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 97;
        for (char j = 1; j <= n + 1 - i; j++)
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}*/

/*
☺☻♥♦
☺☻♥
☺☻
☺
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (char j = 1; j <= n + 1 - i; j++)
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}*/


// 1
// ab
// 123
// abcd
// 12345


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         int raw;
//         printf("enter a value of raw: ");
//         for (int i = 1; i <= raw; i++)
//         {
//             int a = 1;
//             char b = 65;
//             for (int i = 1; i <= raw; i++)
//             {
//                 printf("%d\n%c", a,b);
//                 a++;
//                 b++;
//             }
//             printf("\n");
//         }
        
//     }
    
//     return 0;
// }

/*
1
ab
123
abcd
12345
*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of raw: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        char ch = 65;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch);
                ch++;
            }
            else
            {
                printf("%d", a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*

##*##
##*##
*****
##*##
##*##

*/ // note: (i == 3 || i == 3) and (i == n / 2 + 1 || j == n / 2 + 1)

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of raw: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 3 || j == 3)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*
  *
  *
*****
  *
  *

 *
***
 *
*/


/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of raw: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n / 2 + 1 || j == n / 2 + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*
enter a value of raw: 9
*       *
 *     * 
  *   *  
   * *   
    *    
   * *   
  *   *  
 *     * 
*       *

*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of raw: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j|| i + j == n +1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*
enter a number: 4
*
***
*****
*******
*/

/*/#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}
*/

/*
enter a number: 4
    1
   123
  12345
 1234567

 enter a number: 4
    A
   ABC
  ABCDE
 ABCDEFG
*/


#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int nst = 1;
    int nsp = n;
    for (int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp--;
        for (char j = 65; j <=65 + nst - 1; j++)
        {
            printf("%c",j);
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}
