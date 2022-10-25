/*
Author: Robert Skeehan
Title: Print sin(x) and cos(x) for an x bounded by 0:1 (assuming radians)
*/

#include <stdio.h>
#include <math.h>
#include<ctype.h>

int main () {
    
    //Initialize Variables with correct values
    int min=0;
    int max=10;
    int i=0;
    double interval;
    
    //print table header
    printf("\n%7s%10s%10s\n%7s%10s%10s\n",
        "Value x","Cos(x)","sin(x)",
        "-------","------","------");

    //Continue looping while x is less than 0 or greater than 1
    for (i = min ; i < max; i++)
    {
        interval = i/10.0;
        printf("  %.1f      %0.4f    %0.4f\n", interval,cos(interval), sin(interval));
    }

    return 0;
}