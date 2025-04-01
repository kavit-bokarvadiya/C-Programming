// write a program to copy the contents of one array into another in the reverse order.

// #include<stdio.h>
// int main()
// {
//     int n = 1;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d ",n++);
//     }
//     n--;
//     printf("\n");
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d ",n--);
//     }
//     return 0;
// }

// write a program to copy the contents of one array into another in the similar order.

// #include<stdio.h>
// int main()
// {
//     int arr[3] = {1,2,3};
//     int brr[3];
//     for (int index1 = 0; index1 <= 2; index1++)
//     {
//         brr[index1] = arr[index1];
//     }
//     for (int index2 = 0; index2 <= 2; index2++)
//     {
//         printf("%d ",brr[index2]);
//     }
//     return 0;
// }


// write a program to copy the contents of one array into another in the reverse order.

// #include<stdio.h>
// int main()
// {
//     int arr [3] = {1,2,3};
//     int brr [3];
//     for (int index = 0; index <= 2; index++)
//     {
//         brr[index] = arr[2 - index];
//     }
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("%d ",brr[i]);
//     }
//     return 0;
// }

// write a program to reverse the array without using any extra array.

// simplle variable program.

// #include<stdio.h>
// int main()
// {
//     int n = 3;
//     for (int i = 1; i <= 3; i++)
//     {
//         printf("%d ",n--);
//     }
//     return 0;
// }

//with array. 

#include<stdio.h>
int main()
{
    int arr[3] = {11,25,33};
    for (int i = 0; i <= 2; i++)
    {
        printf("%d ",arr[2 - i]);
    }
    return 0;
}

// using swaping in function