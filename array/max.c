// find out the maximum value of array

/*#include<stdio.h>
int main()
{
    int arr [8] = {9,2,11,13,3,4,8,7};
    int max = -1; // store smallest size number. (that is less than to array number)
    for (int index = 0; index <= 7; index++)
    {
        if (max < arr[index])
        {
            max = arr[index];
        }
    }
    printf("%d",max);
    return 0;
}*/

// modifield this program.

/*#include<stdio.h>
int main()
{
    int arr [8] = {-100,-2,-3,-40,-5,-64,-7,-8};
    int max = arr[0];
    for (int index = 0; index <= 7; index++)
    {
        if (max < arr[index])
        {
            max = arr[index];
        }
    }
    printf("the maximum value is: %d",max);
    return 0;
}*/

// using liberary and find out maximum value.

#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[9] = {1,2,3,4,4,5,6,7,8};
    int max = INT_MIN; // USING FOR MINIMUM VALUE.
    for (int index = 0; index <= 8; index++)
    {
        if (max < arr[index])
        {
            max = arr[index];
        }
    }
    printf("the maximum value is: %d",max);
    return 0;
}