// CHAPTER 05: FUNCTION AND RECURSSION

// FUNCTION: A function is a block of code with performs a particular task. A function can be reused by the programmer is a given program any number of items

// Syntax:

// #include <stdio.h>
//     int sum(int); // function prototype

//     // function declaration
//     int sum(int x) {
//         printf("%d", x);
//         return x;
//     }

// int main(){
//     int a=1;
//     sum(a);
//     return 0;
// }

// Types of function in C:
// 1. Library functions -> Commonly required functions grouped together in a library file on disk.
// 2. User defined functions -> These are the functions declared and defined by the user.

// Recursion
// A function defined in C can call itself. This is called recursion. A function calling itself is also called recursive function.

// #include <stdio.h>

// int factorial(int n) {
//     // Base case: Stops the recursion
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         // Recursive case: Calls itself with a smaller input
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num = 5;
//     printf("Factorial of %d is %d", num, factorial(num));
//     return 0;
// }

// PRACTICE SET QUESTION:

// Q1: Write a program with three functions?
// i. Good morning function which prints 'Good morning'?
// ii. Good afternoon function which prints 'Good afternoon'?
// iii. Good evening function which prints 'Good evening'?

// #include <stdio.h>

// int good_morning();
// int good_afternoon();
// int good_evening();

// int good_morning() {
//     printf("Good morning \n");
// }

// int good_afternoon() {
//     printf("Good afternoon \n");
// }

// int good_evening() {
//     printf("Good evening \n");
// }

// int main () {
//     good_morning();
//     good_afternoon();
//     good_evening();
//     return 0;
// }

// Q2: Use the library to calculate the area of square withside a?

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, area;

//     printf("Enter side length: ");
//     scanf("%f", &a);

//     area = pow(a, 2);   // using math library

//     printf("Area of square = %.2f\n", area);
//     return 0;
// }


// Tasks

// #include <stdio.h>

// /* Function to find the average of 3 numbers */
// float average_of_three(float a, float b, float c)
// {
//     return (a + b + c) / 3;
// }

// /* Function to convert Celsius to Fahrenheit */
// float celsius_to_fahrenheit(float c)
// {
//     return (c * 9 / 5) + 32;
// }

// int main()
// {
//     float x, y, z, avg;
//     float celsius, fahrenheit;

//     /* Input for average */
//     printf("Enter three numbers: ");
//     scanf("%f %f %f", &x, &y, &z);

//     avg = average_of_three(x, y, z);
//     printf("Average = %.2f\n", avg);

//     /* Input for temperature conversion */
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     fahrenheit = celsius_to_fahrenheit(celsius);
//     printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

//     return 0;
// }
