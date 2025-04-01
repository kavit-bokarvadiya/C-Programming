#include<stdio.h>
int main()
{
    float cp, sp, loss, profit;
    printf("enter a cost price: ");
    scanf("%f",&cp);
    printf("enter a selling price: ");
    scanf("%f",&sp);
    if (cp>sp)
    {
        loss = cp - sp;
        printf("your loss is = %f",loss);
    }
    else if (sp > cp)
    {
        profit = sp - cp;
        printf("your profit is = %f",profit);
    }
    else
    {
        printf("no profit, no loss");
    }
    return 0;
}