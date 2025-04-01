/*#include<stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,1}; 
    printf("%d %d %d",arr[2],arr[0],arr[1]); // print (index - 2) and (element - 3) o/p -->> 6
    return 0;
}*/

// taking input

/*#include<stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,1};
    for (int index = 0; index <= 4; index++)
    {
        printf("%d ",arr[index]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[5],index,element = 1;
    for (index = 0; index <= 4; index++)
    {
        printf("enter a %d element: ",element++);
        scanf("%d",&arr[index]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int marks[10] = {25,30,35,65,54,35,30,89,23,25};
    for (int index = 0; index <= 9; index++)
    {
        if (marks[index]<35)
        {
            printf("the failed student roll no is: %d\n",index);
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("enter a marks of rall no %d: ",i);
        scanf("%d",&marks[i]);
    }
    for (int index = 0; index <= 9; index++)
    {
        if (marks[index]<35)
        {
            printf("\nthe failed student rall no is: %d\n",index);
        }
    }
    return 0;
}