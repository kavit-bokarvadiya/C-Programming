// basics of do-while loop

/* do-while (exit control loop)

-->> two key-words (1) do (2) while
-->> with do --> no condition allowed.
-->> after do start block and close curly bracket.(in the block write a updation)
-->> after a complate a block write while condition with semi-colone.
-->> condition result is true - control --> do
-->> condition resule false - loop finish 

while loop -->> entry control loop. 
do-while loop -->> exit control loop.
for loop -->> entry control loop.

*/

/*#include<stdio.h> // exit control loop.
int main()
{
    int i = 1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i <= 10);
    return 0;
}*/

// write a program to clculate sum of first n natural number.

/*#include<stdio.h>
int main()
{
    int n = 0;
    for (int i = 1; i <= 5; i++)
    {
        n = n + i;
    }
    printf("the sum of n natural number is: %d ", n);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of n natural number is: %d",sum);
    return 0;
}*/

// write a program to calculate sum of first n natural number using function.

/*#include<stdio.h>
int addition(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum = addition(n);
    printf("the sum of n natural number is: %d", sum);
    return 0;
}*/
