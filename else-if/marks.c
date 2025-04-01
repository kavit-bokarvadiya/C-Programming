/*#include<stdio.h>
int main()
{
    int a ,b ,c;
    printf("enter a age of ram: ");
    scanf("%d",&a);
    printf("enter a age of shyam: ");
    scanf("%d",&b);
    printf("enter a age of mohan: ");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("ram is bigger than shyam and mohan");
        }
        else
        {
            printf("mohan is bigger than ram and shyam");
        }    
    }
    else
    {
        if (b>a)
        {
            printf("shyam is bigger than ram and mohan");
        }
        else
        {
            printf("mohan is bigger than ram and shyam");
        }
    }
    
    return 0;
}


/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a marks: ");
    scanf("%d",&n);
    //more than 80 --> A
    //more than 60 --> B
    //more than 40 --> C
    //less than 40 --> FAIL
    if ( n > 80)
    {
        printf("A grade");
    }
    else if ( n > 60)
    {
        printf("B grade");
    }
    else if ( n > 40)
    {
        printf("C grade");
    }
    else
    {
        printf("F grade");
    }
    
    return 0;
}*/

// difference between if and else-if

/*#include<stdio.h> // using else-if
int main()
{
    int sp, cp;
    printf("enter a sp: ");
    scanf("%d",&sp);
    printf("enter a cp: ");
    scanf("%d",&cp);
    if (sp > cp)
    {
        printf("profit");
    }
    else if (cp>sp)
    {
        printf("loss");
    }
    else
    {
        printf("no profit,no loss");
    }
     return 0;
}y*/

// using normal if

/*#include<stdio.h>
int main()
{
    int sp, cp;
    printf("enter a sp: ");
    scanf("%d", &sp);
    printf("enter a cp: ");
    scanf("%d", &cp);
    if (sp>cp)
    {
        printf("profit");
    }
    if (sp<cp)
    {
        printf("loss");
    }
    if (sp==cp)
    {
        printf("no profit, no loss");
    }
    return 0;
}*/

