// addresh print through normnal program

/*#include<stdio.h>
int main()
{
    int arr[3] = {25,23,36};
    printf("%p %p %p",&arr[0],&arr[1],&arr[2]);
    return 0;
}*/

// addresh print using to loop

#include<stdio.h>
int main()
{
    int arr [5] = {1,1,1,1,1};
    for (int index = 0; index <= 4; index++)
    {
        printf("%p\n",&arr[index]);
    }
    return 0;
}