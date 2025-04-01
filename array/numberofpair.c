// find the total number of pairs in the array whose sum is equal to the given value x.

// #include<stdio.h>
// int main()
// {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int x = 10;
//     int numberofpairs = 0;
//     for (int index1 = 0; index1 <= 7; index1++)
//     {
//         for (int index2 = index1 + 1; index2 <= 7; index2++)
//         {
//             if (arr[index1]+arr[index2]==x)
//             {
//                 numberofpairs++;
//                 printf("(%d,%d)\n",arr[index1],arr[index2]);
//             }
//         }
//     }
//     printf("the total number of pair is: %d",numberofpairs);
//     return 0;
// }

// count the number of triplates whose sum is equal to the given value x.

#include<stdio.h>
int main()
{
    int arr [8] = {1,2,3,4,5,6,7,8};
    int x = 12;
    int numberoftriplate = 0;
    for (int index1 = 0; index1 <= 7; index1++)
    {
        for (int index2 = index1 + 1; index2 <= 7; index2++)
        {
            for (int index3 = index2 + 1; index3 <= 7; index3++)
            {
                if (arr[index1]+arr[index2]+arr[index3]==x)
                {
                    numberoftriplate++;
                    printf("(%d,%d,%d)\n",arr[index1],arr[index2],arr[index3]) ;       
                }   
            }   
        }  
    }
    printf("the total number of triplates is: %d",numberoftriplate);
    return 0;
}