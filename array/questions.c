// (1) the following array decelaration is correct or not?

/*#include<stdio.h>
int main()
{
    int size = 10, b[size];
    printf("%d\n",size);
    b[size];
    b[0] = 10;
    printf("%d",b[0]);
    return 0;
}*/

// (2)

/*#include<stdio.h>
int main()
{
    int c[3] = {0,1,2};
    printf("%d %d",c[0], c[2]);
    return 0;
}*/

// (3) pridict the output (swap the value of num[0] and num[25])

/*#include<stdio.h>
int main()
{
    int num[26],temp;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];
    num[25]=num[0];
    num[0]=temp;
    printf("\n%d %d",num[0],num[25]);
    return 0;
}*/

// (3) pridict the output

/*#include<stdio.h>
int main()
{
    int sub[50],i;
    for (i = 0; i <= 48; i++);
    {
        sub[i] = i;
        printf("\n%d",sub[i]);
    }
    return 0;
}*/

// calculate the sum of all the elements in the given array

/*#include<stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d ",sum);
    return 0;
}*/

// given array of integersnchange the value of aall odd indexes elements to its second multiople and increament all even indexed value by 10.

/*#include<stdio.h>
int main()
{
    int arr [10] = {1,2,3,4,5,6,7,8,9,1};
    for (int index = 0; index <= 9; index++)
    {
        if (index % 2 == 0)
        {
            printf("the even increament is: %d \n",arr[index] + 10);
        }
        else
        {
            printf("the odd multiplication is: %d \n", arr[index] * 2);
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr [10] = {1,2,3,4,5,6,7,8,9,1};
    for (int index = 0; index <= 9; index++)
    {
        if (index % 2 == 0)
        {
            arr[index] += 10;
        }
        else
        {
            arr[index] *= 2;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/

// count the number of elements in given array greater tha  a given number x

/*#include<stdio.h>
int main()
{
    int arr [10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 5;
    int count = 0;
    for (int index = 0; index <= 9; index++)
    {
        if (arr[index] > x)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}*/

