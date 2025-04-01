// swap two number (pass by reference)

// #include<stdio.h>
// void swap(int* a, int* b) // addresh store into pointer
// {
//     int c;
//     c = *a; // *a pointed value of 1st number
//     *a = *b; // *b pointed value of 2nd number
//     *b = c;
//     return;
// }
// int main()
// {
//     int a,b;
//     printf("enter a 1st number: ");
//     scanf("%d",&a);
//     printf("enter a 2nd number: ");
//     scanf("%d",&b);
//     swap(&a,&b); // a and b are formal value(normal value). so i will pass a addresh(&a,&b)
//     printf("%d %d",a,b); 
//     return 0;
// }

