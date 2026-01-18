// CHAPTER 04: LOOPS CONTROL INSTRUCTIONS

// There are various language in many programming language but we've discuss about three loops which is works in C language

// i. for loop
// ii. do while loop
// iii. while loop

// PRACTICE QUESTION SET:

// Q1: Write a program to print multiplication table of a given number n.
// #include <stdio.h>
// int main(){
//     // printf("Hello world");
//     int number;

//     printf("Enter table of: ");
//     scanf("%d", &number);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }
//     return 0;
// }

// Q2: Write a program to print multiplication table of 10 in reverse order?
// #include <stdio.h>
// int main() {
//     int number = 10;
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }
    
//     return 0;
// }

// Q3: Write a program to calculate the sum of the occuring in the multiplication table of 8?

// #include <stdio.h>

// int main() {
//     int i, sum = 0;

//     for (i = 1; i <= 10; i++) {
//         sum += 8 * i;
//     }

//     printf("%d", sum);
//     return 0;
// }

