/*
*/

#include<stdio.h>
int main() {
    int square_side = 1;
    int square_perimenter = 0;
    int sqaure_area = 0;


    //Write the prompt
    puts("Enter side length of the square");

    //Get the input, NO MESSAGE IN SCANF AND & SIGN NEEDED
    //& - address operator
    scanf("%d", &square_side);

    //Do the math
    square_perimenter = square_side * 4;

    //Create the output
    printf("the perimeter of a sqaure with side %d is %d\n", square_side, square_perimenter);

    return 0;
}