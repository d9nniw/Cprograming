/*
    The introduction to variables

*/

// Preprocessor directive 
// stdio - standard input output
#include <stdio.h>

// Create a main function
int main (void) {
    // Create a variable
    int first_number;
    // Assign the value  to the vairable
    first_number = 100;
    
    // Create and initialize 
    int second_number = -19;
    
    //Print the value of the variable
    printf("the first number is %d\n", first_number);
    printf("the second number is %d\n", second_number);
    // "%d" will not be printed and take first val

// Create a sum of two numbers
int sum = first_number + second_number; 
 printf ("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}