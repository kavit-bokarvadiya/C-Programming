/*write a program of ap in odd and even number and input throgh user*/
/* (condition: number is divide by 5 and 3 so print odd ap and not divide by 5 and 3 print even ap)*/

/*#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num % 5 == 0 || num % 3 == 0)
    {
        for (int i = 4; i <= 3 * 100 - 1; i = i + 3)
        {
            printf("%d ", i);
        }
        
    }
    else
    {
        for (int i = 3; i <= 2 * 100 - 1; i = i + 2)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}*/

/*geometric progrtion*/

/*#include<stdio.h>
int main()
{
    float nth, gp;
    printf("enter a staring of gp: ");
    scanf("%f",&gp);
    printf("enter a nth term of gp: ");
    scanf("%f",&nth);
    for (int i = 1; i <= nth; i++)
    {
        printf("%f\n",gp);
        gp = gp * 1 / 2;
    }
    return 0;
}*/


/*write a program if a prime number or not*/

/*#include<stdio.h>
int main()
{
    int num,a;
    printf("enter a number: ");
    scanf("%d",&num);
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            a=0;  
        }     
    }
    if (num == 1)
    {
        printf("it is an prime number");
    }
    
    else if (a==0)
    {
        printf("it is an composite number");
    }
    else
    {
        printf("it is an prime number");
    }
    
    return 0;
}*/

/*using of break and continue keyword*/

#include<stdio.h>
int main()
{
    int i ;
    for ( i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }   
        printf("%d ",i);
    }
    if (i % 2 != 0)
    {
        for ( i = 2; i <= 100; i++)
        {
            printf("\n%d", i);
            i = i + 1;
        }
    }
    return 0;
}