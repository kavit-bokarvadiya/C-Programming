// print maximum number of array element

// #include<stdio.h>
// int main()
// {
//     int arr [8] = {1,2,3,4,5,6,7,8};
//     int max = arr[0];
//     for (int index = 0; index <= 7; index++)
//     {
//         if (max < arr[index])
//         {
//             max = arr[index];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// find the second largest element in the given array.

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int max = INT_MIN; // first maximum -->> 8
//     int smax = INT_MIN; // second maximum -->> 7
//     for (int index1 = 0; index1 <= 7; index1++)
//     {
//         if (max < arr[index1])
//         {
//             max = arr[index1];
//         }
//     }
//     for (int index2 = 0; index2 <= 7; index2++)
//     {
//         if (arr[index2] != max && smax < arr[index2])
//         {
//             smax = arr[index2];
//         }
//     }
//     printf("the first largesst element is: %d\n",max);
//     printf("the second largest element is: %d",smax);
//     return 0;
// }

// second maximum 2nd method

#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[8] = {1,2,3,56,5,6,9,8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int index = 0; index <= 7; index++)
    {
        if (max < arr[index])
        {
            smax = max;
            max = arr[index];
        }
        else if (smax < arr[index] && max != arr[index]) // (max > arr[index])
        {
            smax = arr[index];
        } 
    }
    printf("the second maximum value is: %d",smax);
    return 0;
}