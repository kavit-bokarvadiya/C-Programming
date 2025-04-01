// important   // sum =+ num[i];

// #include<stdio.h>
// int main()
// {
//     int num [5] = {10,20,30,40,50};
//     int sum = 0;
//     for (int i = 0; i <= 4; i++)
//     {
//         sum += num[i];
//         // sum =+ num[i];
//     }
//     printf("sum is: %d",sum);
//     return 0;
// }

// write a menu-driven program for the following requirements.
// 1. addition of two 1d array
// 2. substraction of two 1d array
// 3. multiplication of two 1d array
// 4. exit

// #include<stdio.h>
// void addition(int arr1[], int arr2[],int size)
// {
//     int sum[size];
//     for (int i = 0; i <= size; i++)
//     {
//         sum[i] = arr1[i] + arr2[i];
//     }
//     for (int i = 0; i <= size; i++)
//     {
//         printf("the sum of two arrays is: %d\n",sum[i]);
//     }
// }
// void subtraction(int arr1[], int arr2[],int size)
// {
//     int sub[size];
//     for (int i = 0; i <= size; i++)
//     {
//         sub[i] = arr1[i] - arr2[i];
//     }
//     for (int i = 0; i <= size; i++)
//     {
//         printf("the sum of two arrays is: %d\n",sub[i]);
//     }
    
// }
// void multiplication(int arr1[], int arr2[],int size)
// {
//     int mul[size];
//     for (int i = 0; i <= size; i++)
//     {
//         mul[i] = arr1[i] - arr2[i];
//     }
//     for (int i = 0; i <= size; i++)
//     {
//         printf("the sum of two arrays is: %d\n",mul[i]);
//     }
// }
// int main()
// {
//     int size;
//     printf("enter a size of arrays: ");
//     scanf("%d",&size);

//     int arr1[size], arr2[size];

//     int element = 1;

//     printf("enter a element of first array: \n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("enter a %d element: ",element++);
//         scanf("%d",&arr1[i]);
//     }
    
//     int element2 = 1;
//     printf("enter a element of second array:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("enter a %d element: ",element2++);
//         scanf("%d",&arr2[i]);
//     }
    
//     int choice;
//     printf("menu:\n");
//     printf("1. addition of two arrays:\n");
//     printf("2. substration of two arrays:\n");
//     printf("3. multiplication of two arrays:\n");
//     printf("enter a choice 1 or 2 or 3: ");
//     scanf("%d",&choice);

//     if (choice == 1)
//     {
//         addition(arr1, arr2, size);
//     }
//     else if (choice == 2)
//     {
//         subtraction(arr1, arr2, size);
//     }
//     else if (choice == 3)
//     {
//         multiplication(arr1, arr2, size);
//     }
//     else
//     {
//         printf("in valide choice\n");
//     }
//     return 0;
// }

// 2.Write a program to find out all the even numbers and the sum of even numbers from the starting and ending number ranges. The user should enter the starting and cading range.


// #include <stdio.h>

// void find_even_numbers_and_sum(int start, int end) {
//     int even_sum = 0;
//     printf("Even numbers between %d and %d:\n", start, end);
//     for (int num = start; num <= end; ++num) {
//         if (num % 2 == 0) {
//             printf("%d ", num);
//             even_sum += num;
//         }
//     }
//     printf("\nSum of even numbers: %d\n", even_sum);
// }

// int main() {
//     int start_range, end_range;
//     printf("Enter the starting range: ");
//     scanf("%d", &start_range);
//     printf("Enter the ending range: ");
//     scanf("%d", &end_range);

//     find_even_numbers_and_sum(start_range, end_range);

//     return 0;
// }


// 3.Write a program to find out all the prime numbers from the starting and ending number ranges. The user should enter the stirting and cading

