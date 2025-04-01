// decelarasation of array

// #include<stdio.h>
// int main()
// {
//     int n [8];
//     return 0;
// } 

// initilization of an array how to know the name of an array

// #include<stdio.h>
// int main()
// {
//     int a [5] = {1,2,3,4,5};
//     printf("%d",a[4]);
//     return 0;
// }

// different way of initilazation of an array

// #include<stdio.h>
// int main()
// {
//     int a [5];
//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     a[3] = 4;
//     a[4] = 5;
//     printf("%d",a[4]);
//     return 0;
// }

// using the index and print the array element.

// example 1
// #include<stdio.h>
// int main()
// {
//     int arr [3] = {1,2,3}; // decelare and initilize 3 element
//     printf("%d ",arr[0]); // index 0
//     printf("%d ",arr[1]); // index 1
//     printf("%d",arr[2]); // index 2
//     return 0;
// }

//example 2
// #include<stdio.h>
// int main()
// {
//     int arr [5] = {11,22,33,44,55};
//     printf("%d",arr[2]);
//     printf("%d",arr[1]);
//     return 0;
// }

//updatio of a value

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printf("normal element value is: %d\n",arr[4]); // index 4 {1,2,3,4,5}
//     arr[4] = 10;
//     printf("updation is :%d\n",arr[4]); // index 4 {1,2,3,4,10}
//     printf("index out of bound error :%d\n",arr[5]); // index out of bound error
//     printf("index out of bound error :%d",arr[-1]); // index out of bound error
//     return 0;
// }

// array of an character

// #include<stdio.h>
// int main()
// {
//     char arr[3] = {'a','b','c'};
//     printf("%c %c %c",arr[0],arr[1],arr[2]);
//     return 0;
// }

// array of float

// #include<stdio.h>
// int main()
// {
//     float arr[3] = {1.2,2.3,3.5};
//     printf("%f %f %f",arr[0],arr[1],arr[2]);
//     return 0;
// }

// taking input in array

// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     printf("enter a value: ");
//     scanf("%d",&arr[0]);
//     printf("enter a value: ");
//     scanf("%d",&arr[1]);
//     printf("enter a value: ");
//     scanf("%d",&arr[2]);
//     printf("enter a value: ");
//     scanf("%d",&arr[3]);
//     printf("enter a value: ");
//     scanf("%d",&arr[4]);

//     printf("hahaha it is an all vaue: %d %d %d %d %d",arr[0], arr[1], arr[2], arr[3],arr[4]);
//     return 0;
// }

// print the array element value using loop.

// #include<stdio.h>
// int main()
// {
//     int arr[3] = {1,2,3};
//     for (int i = 0; i <= 2; i++) // index 0 to 2
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3] = {1,2,3};
//     for (int i = 0; i < 3; i++) // index 0 to 2 
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

// input from user using loop in array.

// #include<stdio.h>
// int main()
// {
//     int n[3];
//     int m = 1;
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("enter a %d number: ",m++);
//         scanf("%d",&n[i]);
//     }
//     for (int j = 0; j <= 2; j++)
//     {
//         printf("%d ",n[j]);
//     }
//     return 0;
// }

// print the reverse order value of an array.

// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     int m = 1;
//     int i;
//     for ( i = 0; i <= 4; i++)
//     {
//         printf("enter a %d number: ",m++);
//         scanf("%d",&arr[i]);
//     }
//     for (int j = 4; j >= 0; j--)
//     {
//         printf("%d ",arr[j]); 
//     }
//     return 0;
// }

// roll number of student

// #include<stdio.h>
// int main()
// {
//     int arr [10] = {35,30,20,21,22,25,45,47,48,35};
//     for (int i = 0; i <= 9; i++)
//     {
//         if (arr[i] < 35)
//         {
//             printf("the roll no is: %d\n",i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr [10];
//     int stu = 1;
//     for (int i = 0; i <= 9; i++)
//     {
//         printf("enter a mark of %d student: ",stu++);
//         scanf("%d",&arr[i]);
//     }
//     for (int j = 0; j <= 9; j++)
//     {
//         if (arr[j] < 35)
//         {
//             printf("the roll number is: %d\n",j);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
//     return 0;
// }

// predict the output (swaping of array)

// #include<stdio.h>
// int main()
// {
//     int num[26],temp;
//     num[0] = 100;
//     num [25] = 200;
//     temp = num [25];
//     num [25] = num[0];
//     num [0] = temp;
//     printf("\n%d %d",num[0],num[25]);
//     return 0;
// }

