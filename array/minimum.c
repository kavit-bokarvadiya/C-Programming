// find the minimum value out of all the elements in the array.

/*#include<stdio.h>
int main()
{
    int arr [8] = {1,2,3,4,5,6,7,8};
    int min = arr [0];
    for (int index = 0; index <= 7; index++)
    {
        if (min > arr[index])
        {
            min = arr[index];
        }
    }
    printf("the minimum value is: %d",min);
    return 0;
}*/

// using liberary make a program.

#include<stdio.h>
#include<limits.h>
int main()
{
    int arr [8] = {1,2,3,-4,5,6,7,8};
    int min = INT_MAX;
    for (int index = 0; index <= 7; index++)
    {
        if (min > arr[index])
        {
            min = arr[index];
        }
    }
    printf("%d",min);
    return 0;
}