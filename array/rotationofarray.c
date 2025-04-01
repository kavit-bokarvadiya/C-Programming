// step 1 -->> rotate of array.

#include<stdio.h>
int main()
{
    int arr [7] = {1,2,3,4,5,6,7};
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ",arr[6 - i]);
    }
    return 0;
}