#include<stdio.h>
int main()
{
    int ram, shyam, mohan;
    printf("enter a age of ram: ");
    scanf("%d", &ram);
    printf("enter a age of shyam: ");
    scanf("%d", &shyam);
    printf("enter a age of mohan: ");
    scanf("%d", &mohan);
    if (ram > shyam)
    {
        if (ram > mohan)
        {
            printf("\nram is bigger then shyam and mohan\n the age of ram is: %d", ram);
        }
        if (mohan > shyam)
        {
            printf("\nmohan is bigger then ram and shyam\n the age of ram is: %d",mohan);
        }    
    }
    else
        {
            printf("\nshyam is bigger than ram and mohan\n the age of shyam is: %d", shyam);
        }
    
    return 0;
}