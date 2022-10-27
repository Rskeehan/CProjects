/*
Author: Robert Skeehan
Title: Print sin(x) for an input x bounded by 0:1 (assuming radians)
*/

#include <stdio.h>
#include <math.h>
#include<ctype.h>

int main (int argc, char *argv[]) {
    
    //declare a variables for later use
    float x, ret, min, max;

    // Read in a value for x, sanitize the input, and bound input from 0 to 1.
    printf("Input a number x between 0 and 1 to calculate sin(x): ");

    ret = scanf("%f",x); // will be 0 if scanf detects a non-numericinput 
    
    //sanitize the input by using output of scanf to check for strings and numbers beyond given bounds.
    min = 0.0;
    max = 1.0;

    //Continue looping while x is less than 0 or greater than 1 or is not a number.
    while (x < min || x > max || ret !=1) 
    {
        if (ret != 1)
        {
            while(getchar() != '\n');
            printf("\nIncorrect input. Please enter a number between %d and %d: ",min,max);
        }
        else
        {
            printf("\nIncorrect input. please enter a value between %d and %d: ",min,max);
        }
        ret = scanf("%f",&x);
    }

    //Print out the value of the correct user input.
    printf("for x = %f, sin(x) = %f\n\n", x, sin(x));

    return 0;
}