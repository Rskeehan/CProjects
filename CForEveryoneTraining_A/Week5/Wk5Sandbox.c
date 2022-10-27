#include <stdio.h>
#include <math.h>

int main (void) 
{
    //init variables
    const int SIZE =5;
    int grades[]={78, 67, 92, 83, 88};
    int i;
    float avg;
    double sum = 0.0;
    double *ptr_to_sum =&sum;

    //print header:
    printf("My Grades are:\n");
    avg=0.0; //init average
    //print grades and calcualte average along the way
    for (i = 0; i<SIZE ; i++)
    {
        avg=avg+(grades[i]-avg)/(i+1);
        sum = sum + grades[i];
        printf("Grade is %d\n",grades[i]);
        
    }

    printf("The sum is at %lu, or %p and the sum is %g\n",ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("The Average is: %.2f\n\n",avg);
    return 0;
}