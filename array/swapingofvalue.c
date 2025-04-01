// swaping of value using of array anf function.(not using of pointer)

// #include<stdio.h>
// void fun(int arr[])
// {
//     int c;
//     c = arr[0];
//     arr[0] = arr[1];
//     arr[1] = c;
//     return;
// }
// int main()
// {
//     int arr[2] = {25,3};
//     printf("%d %d\n",arr[0],arr[1]);
//     fun(arr);
//     printf("%d %d",arr[0],arr[1]);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1,b = 3, c;
//     c = a; // c = 1
//     a = b; // a = 3
//     b = c; 
//     printf("%d %d",a,b);
//     return 0;
// }

// #include<stdio.h>
// void fun(int* a,int* b)
// {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
//     return;
// }
// int main()
// {
//     int a,b;
//     printf("enter a 1st value: ");
//     scanf("%p",&a);
//     printf("enter a 2nd value: ");
//     scanf("%p",&b);
//     fun(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }



