// que (1) write a c program to compute the quotient and reminder. read dividend and divisor from the user.

// #include<stdio.h>
// int main()
// {
//     int m,n,reminder,quotient;
//     printf("enter a dividend: ");
//     scanf("%d",&m);
//     printf("enter a  divisor: ");
//     scanf("%d",&n);
//     quotient = m / n;
//     reminder = m % n;
//     printf("quotient = %d\n",quotient);
//     printf("reminder = %d",reminder);
//     return 0;
// }

// que (2) write a c program to find odd or even number. the user should enter the number. without using the "if else statement".

// #include<stdio.h>
// int main()
// {
//     int n,m;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     (n % 2 == 0 ? printf("even number") : printf("odd number"));
//     return 0;
// }

// que (3) write a c program to find positive or nagative number. the user should enter the number. use conditional/ternary operator.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     (n > 0 ? printf("positive number") : printf("negative number"));
//     return 0;
// }

// ques (4)

// #include <stdio.h>
// int main() {
// char name[20];
// int salary,bonus,netSalary;
// printf("Enter a name: ");
// scanf("%s",name);
// printf("Enter the salary: ");
// scanf("%d",&salary);
// printf("Your name is %s and salary is %d",name,salary);
// if(salary >= 5000 && salary < 10000){
// bonus = salary * 0.10;
// }
// else if(salary >= 10000 && salary < 50000){
// bonus = salary * 0.075;
// }
// else if(salary >= 50000 && salary < 100000){
// bonus = salary * 0.05;
// }
// else if( salary >= 100000){
// bonus  = salary * 0.025;
// }
// else{
// bonus = 200;
// }
// netSalary = salary + bonus;
// printf("\nName\t\t%s",name);
// printf("\nSalary\t\t%d",salary);
// printf("\n+Bonus\t\t%d",bonus);
// printf("\nNet Salary\t%d",netSalary);
// return 0;
// }

// que (5) write a program to read the value of the name and sales of a salesman from user. calculate commission as per given following rule.

// #include <stdio.h>
// int main() {
//   char name[50];
//   int sales;
//   float commission;

//   printf("Enter the name of the salesman: ");
//   scanf("%s", name);

//   printf("Enter the sales amount: ");
//   scanf("%d", &sales);

//   if (sales < 25000) {
//     commission = (sales / 1000) * 20;
//   } else if (sales >= 25000 && sales < 500000) {
//     commission = (sales / 1000) * 15;
//   } else if (sales >= 50000 && sales < 100000) {
//     commission = (sales / 1000) * 10;
//   } else {
//     commission = (sales / 1000) * 5;
//   }

//   printf("\nName: %s\n", name);
//   printf("Sales: %d\n", sales);
//   printf("+Commission: %.2f\n", commission);
//   printf("Net Salary: %.2f\n", sales + commission);
//   return 0;
// }

// que (6) write a proogram to read the value of

// #include <stdio.h>

// int main() {
//   char customerName[50];
//   int unitsConsumed;
//   float bill = 0;
//   printf("Enter customer name: ");
//   scanf("%s", customerName);
//   printf("Enter units consumed: ");
//   scanf("%d", &unitsConsumed);
//   if (unitsConsumed <= 100) 
//         {
//           bill = unitsConsumed * 2.5;
//         }
//    else if (unitsConsumed <= 300) 
//         {
//             bill = (100 * 2.5) + ((unitsConsumed - 100) * 3.5);
//         } 
//   else 
//         {
//             bill = (100 * 2.5) + (200 * 3.5) + ((unitsConsumed - 300) * 4.0);
//         }
//   printf("Customer: %s\n", customerName);
//   printf("Unit Consumed: %d\n", unitsConsumed);
//   printf("Total Bill: %.2f\n", bill);
//  return 0;
// }

