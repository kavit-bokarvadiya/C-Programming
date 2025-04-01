// #include<stdio.h>
// int main()
// {
//     char ch = 'a';
//     printf("%d",(int)ch);
//     return 0;
// }

// 12
// 1234
// 123456
// 12345678

#include<stdio.h>
int main()
{
    int num [5] = {10,20,30,40,50};
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum += num[i];
        // sum =+ num[i];
    }
    printf("sum is: %d",sum);
    return 0;
}