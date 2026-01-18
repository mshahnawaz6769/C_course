// CHAPTER 02: INSTRUCTION AND OPERATORS

// Types of Instructions:

// i. Type declaration instruction. 
// ii. Arthematic instruction.
// iii. Control instruction.

// Type declaration instructions:
    // This is how we declare a variable in C language.
    // int a, float b, char c | To reserve a memory location.

// int a; // Declare an integer variable 'a'
// float b; // Declare a float variale 'b'
// int i = 10; // Declare and initiallize i with 10
// int j = i; // Declare j and initiallize with i
// int a = 1, b = 2; // Declare and initiallize multiple variable.

// invalid | float | validity

// Arthematic Instructions:
// It performs mathematical operations. Heere are some of the commonly used operators in C language.
// Operator: + - / * %

// Type Conversion
// An arthematic operation between:
    // int and int -> int
    // int and float -> float
    // float and float -> float

// Operator precedence in C
// The following table list the operator priority ini C.
// */% -> +- -> =

// Control Instructions:
// Determines the flow to control in a program four types of controll instruction in C are:
// i. Sequence Control Instructions
// ii. Decision Control Instructions
// iii. Loop Control instructions
// iv. Case Control Instructions

// PRACTICE QUESTION SET

// Q1: Which of the following is invalide in c?
// int a = 1; int b = a -> valid
// int v = 1.1 -> invalid
// char dt = '21 Jan 2026' -> valid

// Q2: What data type willl 3.0/8-2 return?
// #include <stdio.h>
// int main(){
//     int a = 3.0/8-2;
//     printf("%d", a); // -1
//     return 0;
// }

// Q3: Write a program to check whether a number is divisible by 97 or not?
// #include <stdio.h>
// int main(){
//     int a = 78344772;
//     if(a % 97 == 0) {
//         printf("This value %d is divisible by 97", a);
//     } else {
//         printf("This value %d is not divisible by 97", a);
//     }
//     return  0;
// }

// Q4: Explain step by step evaluation of 3 * x/2 - z * k, where x = 2, y = 3, z = 3, k = 1?
// #include <stdio.h>
// int main(){
//     int x = 2, y = 3, z = 3, k = 1;
//     int a = 3 * x/2 - z * k;
//     printf("%d", a);
//     return 0;
// }