// CHAPTER 03: CONDITIONAL STATEMENTS / INSTRUCTIONS

// Decision Making Instruction in C
// i. If else statements
// ii. Switch case statements

// If else statement:
// if (condition_to_be_checked)
// {
//     /* code is executed */
// } else {
//     /* if condition is not true here the value printed */
// }

// Relational Operator: ==, >=, <=, !=
// Logical Operator: &&, ||, !

// Ternary Operator:
// (condition) ? "If true" : "If not true";

// Switch case Statements
// switch (expression)
// {
// case constant expression:
//     /* code */
//     break;

// default:
//     break;
// }

// PRACTICE SET QUESTIONS

// Q1: Write a program to find grade of a student given his marks based on behavior?
// #include <stdio.h>
// int main() {
//     int marks1,  marks2, marks3;
    
//     printf("Enter marks 1: ");
//     scanf("%d", &marks1);
    
//     printf("Enter marks 2: ");
//     scanf("%d", &marks2);

//     printf("Enter marks 3: ");
//     scanf("%d", &marks3);

//     int sum = marks1 + marks2 + marks3;
//     int percentage = ((sum)/300) * 100;
//     if (percentage >= 90 && percentage <=100)
//     {
//         printf("A");
//     }
//     else if (percentage >= 80 && percentage < 90)
//     {
//         printf("B");
//     }
//     else if (percentage >= 70 && percentage < 80)
//     {
//         printf("C");
//     }
//     else if (percentage >= 60 && percentage < 70)
//     {
//         printf("D");
//     }
//     else if (percentage >= 50 && percentage < 60)
//     {
//         printf("E");
//     }
//     else if (percentage < 0 && percentage > 100)
//     {
//         printf("There are some thing error");
//     }
//     else
//     {
//         printf("F");
//     }
    
//     return 0;
// }

// Q2: Write a program to determine whether a student has passes or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as output form the user?
// #include <stdio.h>
// int main() {
//     float m1, m2, m3, total, percentage;

//     printf("Enter marks of three subjects:\n");
//     scanf("%f %f %f", &m1, &m2, &m3);

//     total = m1 + m2 + m3;
//     percentage = total / 3;

//     if (m1 >= 33 && m2 >= 33 && m3 >= 33 && percentage >= 40) {
//         printf("Student has PASSED.\n");
//     } else {
//         printf("Student has FAILED.\n");
//     }

//     return 0;
// }

// Q3: Calculate income tax paid by an employee to the Government as per the slabs mention below:

// Income slab  -   Tax
// 2.5L - 5.0L  -   5%  
// 5.0L - 10.0L -   20%
// Above 10.0L  -   30%
// Below 2.5L   -   no tax

// #include <stdio.h>

// int main() {
//     float income, tax = 0;

//     printf("Enter annual income (in Rs): ");
//     scanf("%f", &income);

//     if (income <= 250000) {
//         tax = 0;
//     }
//     else if (income <= 500000) {
//         tax = 0.05 * (income - 250000);
//     }
//     else if (income <= 1000000) {
//         tax = 12500 + 0.20 * (income - 500000);
//     }
//     else {
//         tax = 112500 + 0.30 * (income - 1000000);
//     }

//     printf("Income Tax to be paid: Rs %.2f\n", tax);

//     return 0;
// }

// Q4: Write a program to find whether a yaer entered by the user in a leap year or not, Take year as an input from the user.

// #include <stdio.h>

// int main() {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }

//     return 0;
// }

// Q5: Write a program to find greatest of four numbers entered by the user.

// #include <stdio.h>

// int main() {
//     int a, b, c, d, greatest;

//     printf("Enter four numbers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     greatest = a;

//     if (b > greatest)
//         greatest = b;
//     if (c > greatest)
//         greatest = c;
//     if (d > greatest)
//         greatest = d;

//     printf("The greatest number is: %d\n", greatest);

//     return 0;
// }



