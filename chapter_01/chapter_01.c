// CHAPTER 01: VARIABLES, CONSTANTS AND KEYWORDS
// 1. Install code runner extension

// Variables: ("%d")
// Variable is a container to store value.

// Rules of variables:
// i. Variables not contains white space character.
// ii. It not containes special and pound character.
// iii. First character must be an alphabet or underscore (_).
// iv. No commas are allowed.
// v. Varaibles name are case sensitivity.

// We must be readable variable names are written in code to easily understandable.

// Constants:

// "An entity whose value does not change is called constants."
// "An entity whose value is change called variables"

// Types of constant
// i. Integer -> 1,2,3,4,.....
// ii. Real contant -> 1.1, 3.5,...
// iii. Character constant -> a,s,d,d,......

// Data Types: (Int, float, char)

// Q: How much memory contain float and char and int taken in C language?
// int: 4 bytes (32 bits)
// float: usually 4 bytes (32 bits)
// char: Always 1 byte (8 bits)

// #include <stdio.h>
// int main ()
// {
//     printf("Size of int: %zu bytes\n", sizeof(int));
//     printf("Size of int: %zu bytes\n", sizeof(char));
//     printf("Size of int: %zu bytes\n", sizeof(float));
// }    

// KEYWORDs:
// These are reserved words, whose meaning is already known to the commpiler.
// there are 32 keywords available in C.

// auto | double | int | struct | break | long | else | switch | case | return | enum | typedef | char | register | extern | union | const | short | long | void | default | sizeof | goto | float | unsigned | continue | signed | volatile | do | static | if | while

// Comments:
// -> for single line
// /* */ -> for multiple line

// Receiving input to user:
// using scanf() property

// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);
//     printf("%d", a);
//     return 0;
// }

// %d -> integer
// %f -> float
// %c -> char
// & -> address
// \n -> represent a new line
// \t -> tab space
// escape sequence character

// PRACTICE QUESTION SETS:

// Q1: What a C program to calculate the area of rectangle?
// i. Using hard coded inputs?
// ii. Using user supply input?

// #include <stdio.h>
// int main () {
    // i.
    // int _length = 2;
    // int _width = 3;
    // int _area = _length * _width;
    // printf("Area of rectangle is %d meter square", _area);

    // ii.
    // int _length, _width;

    // printf("Enter length: ");
    // scanf("%d", &_length);

    // printf("Enter width: ");
    // scanf("%d", &_width);

    // int _area = _length * _width;
    // printf("Area of rectangle is %d square meters\n", _area);


    // return 0;
// }

// Q2: Calculate the area of a circle and modify the same program to calcuulate the volume  of cylinder using same radius and height?

// #include <stdio.h>
// int main()
// {
//     float _radius = 2.3;
//     float _height = 1.1;
    
//     float _circle = (3.142) * _radius * _radius;
//     printf("Area of circle is %.2f", _circle);
    
//     return 0;
// }

// Q3: Write a program to convert celcious C to farenheit F?

// #include <stdio.h>
// int main() {
//     float C_degree = 1;
//     float D_degree = ((9/5) * C_degree) + 32;
//     printf("The degree of Farenheit is: %2.f", D_degree);
//     return 0;
// }
