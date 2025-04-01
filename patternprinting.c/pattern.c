// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter a row: ");
//     scanf("%d",&a);
//     printf("enter a row: ");
//     scanf("%d",&b);
//     printf("enter a row: ");
//     scanf("%d",&c);
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= b; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= c; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
char name[20];
int salary,bonus,netSalary;
printf("Enter a name: ");
scanf("%s",name);
printf("Enter the salary: ");
scanf("%d",&salary);
printf("Your name is %s and salary is %d",name,salary);
if(salary >= 5000 && salary < 10000){
bonus = salary * 0.10;
}
else if(salary >= 10000 && salary < 50000){
bonus = salary * 0.075;
}
else if(salary >= 50000 && salary < 100000){
bonus = salary * 0.05;
}
else if( salary >= 100000){
bonus  = salary * 0.025;
}
else{
bonus = 200;
}
netSalary = salary + bonus;
printf("\nName\t\t%s",name);
printf("\nSalary\t\t%d",salary);
printf("\n+Bonus\t\t%d",bonus);
printf("\nNet Salary\t%d",netSalary);
return 0;
}