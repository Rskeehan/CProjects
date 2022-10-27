/*
Author: Rob Skeehan
Purpose: read data into an array and then find the average of the data in the array
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    //initialize variables/constants
    FILE *myFile;
    int curWeight = 0;
    float avg = 0.0;

    // get pointer to file of data
    myFile = fopen("Elephant_Seal_data.txt", "r");
    
    //Compute the running average of data until EOF is read.
    int i = 0;
    while (fscanf(myFile, "%d", &curWeight)==1)
    {
        // printf("%d\n", curWeight); // Prints the current weight, commented out due to lack of need
        avg=avg+(curWeight-avg)/(i+1);
        i++;
    }
    printf("The Average elephant seal weighs: %.2f",avg);

    fclose(myFile);
    return 0;
}