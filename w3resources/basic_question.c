// 1. Write a C program to print your name, date of birth, and mobile number.
// Expected Output:

// Name   : kavit bokarvadiya 
// DOB    : may 8, 2000  
// Mobile : 8128400804

// #include<stdio.h>
// int main()
// {
//     printf("name   : kavit bokarvadiya\n");
//     printf("dob    : may 8, 2000\n");
//     printf("mobile : 8128400804\n");
//     return 0;
// }

// 2. Write a C program to get the C version you are using.
// Expected Output:

// We are using C18!

// #include<stdio.h>
// int main()
// {
//     printf("we are using c18!\n");
//     return 0;
// }

// 3. Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
// Expected Output:

// ######
// #
// #
// #####
// #
// #
// #

//     ######
//   ##      ##
//  #
//  #
//  #
//  #
//  #
//   ##      ##
//     ######


// #include<stdio.h>
// int main()
// {
//     printf("######\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#####\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("   ######  \n");
//     printf(" ##      ##\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf(" ##      ##\n");
//     printf("   ######  \n");
//     return 0;
// }/

// 4. Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

// #include<stdio.h>
// int main()
// {
//     char a = 'X',b = 'M', c = 'L';
//     printf("The reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
//     return 0;
// }

// 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches... p = 2(l*w)
// Area of the rectangle = 35 square inches... a = l * w

// #include<stdio.h>
// int main()
// {
//     float l = 7, w = 5, p;
//     p = 2 * (l + w);
//     printf("perimeter of the ractangle = %f inches",p);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int l = 7, w = 5, area;
//     area = l * w;
//     printf("area of the ractangle = %d square inches",area);
//     return 0;
// }

// 6. Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches. c = 2 * pi * r
// Area of the Circle = 113.040001 square inches. a = pi*r*r

// #include<stdio.h>
// int main()
// {
//     float pi = 3.1415, radius = 6, area;
//     area = pi * radius * radius;
//     printf("area of the circle = %f square inches", area);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float pi = 3.1415, radius = 6, c;
//     c = 2 * pi * radius;
//     printf("area of the circle = %f inches", c);
//     return 0;
// }

// 9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 38
// Expected Output:
// Sum of the above two integers = 63

// #include<stdio.h>
// int main()
// {
//     int m,n,o;
//     printf("input the first integr: ");
//     scanf("%d",&m);
//     printf("input the second integr: ");
//     scanf("%d",&n);
//     o = n + m;
//     printf("sum of the above two integers = %d",o);
//     return 0;
// }

// 10. Write a C program that accepts two integers from the user and calculates the product of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375

// #include<stdio.h>
// int main()
// {
//     int m,n,o;
//     printf("input the first integer: ");
//     scanf("%d",&m);
//     printf("input the second integer: ");
//     scanf("%d",&n);
//     o = m * n;
//     printf("product of the above two integers = %d\n",o);
//     return 0;
// }

// 12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

// #include<stdio.h>
// int main()
// {
//     float hrs, amount = 15000, salary;
//     int id;
//     printf("input the employees id(max. 10chars): ");
//     scanf("%d",&id);
//     printf("input the working hrs: ");
//     scanf("%f",&hrs);
//     salary = amount * hrs;
//     printf("employees id = %d\n",id);
//     printf("salary = U$ %f",salary);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char id[10];         // Variable to store employee ID (up to 10 characters)
//     int hour;            // Variable to store working hours
//     double value, salary; // Variables for hourly salary and total salary

//     // Prompt user for employee ID
//     printf("Input the Employees ID(Max. 10 chars): ");
//     scanf("%s", &id);

//     // Prompt user for working hours
//     printf("\nInput the working hrs: ");
//     scanf("%d", &hour);

//     // Prompt user for hourly salary
//     printf("\nSalary amount/hr: ");
//     scanf("%lf", &value);

//     // Calculate total salary
//     salary = value * hour;

//     // Print employee ID and salary
//     printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id, salary);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int m,n;
//     printf("input number of lines: ");
//     scanf("%d",&m);
//     printf("number of character in a line: ");
//     scanf("%d",&n);
//     int a = 1;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

