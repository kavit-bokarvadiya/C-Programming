// user input a size of array

#include<stdio.h>
int main()
{
    int n, a = 1;
    printf("enter a size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter a %d element value: ",a++);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j <= n - 1; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}