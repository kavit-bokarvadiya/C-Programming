/*#include<stdio.h>
int main()
{
    int selling_price, cost_price, profit, loss;
    printf("enter a value of selling price: ");
    scanf("%d", &profit);
    printf("enter a value of cost price: ");
    scanf("%d", &loss);
    if (profit>loss)
    {
        printf("profit");
    }
    else
    {
        printf("loss");

    }
    return 0;
}*/

// given length and breadth of a rectangle ..... rectangle is greather than perimeter
 
#include<stdio.h>
int main()
{
    int area, perimeter, length, breadth;
    printf("enter a length: ");
    scanf("%d", &length);
    printf("enter a breadth: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = ( 2 * (length + breadth));
    printf("area is: %d\n",area);
    printf("perimeter is: %d\n",perimeter);
    if (area > perimeter)
    {
        printf("area is more then perimeter");
    }
    if (area < breadth)
    {
        printf("area is less then perimeter");
    }
    if (area == breadth)
    {
        printf("area is similar to perimeter");
    }
    return 0;
}