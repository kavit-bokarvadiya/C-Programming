// ques: display this GP - 1,2,4,8,16,32.... upto 'n' terms.

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n ; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }
    return 0;
}*/

// ques: display this GP - 3,12,48.... upto 'n' terms.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a nth term of gp: ");
//     scanf("%d",&n);
//     int a = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", a);
//         a = a * 4; 
//     }
//     return 0;
// }

// display this GP- 1,2,4,8,16... upto'n' terms.

#include<stdio.h>
int main()
{
    int n, a = 1;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a *= 2;
    }
    return 0;
}