#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//FUCNTION LIBRARY
long int recur_factorial(int n) {
    if (n==1)
        return 1;
    else
        return (recur_factorial(n-1)*n);  
}

long fibonacciYO(int n){
    if (n<=1)
        return n;
    else
        return (fibonacciYO(n-1) + fibonacciYO(n-2));
}

int main (void) {

    

    /* FACTORIAL CODE
    int input;
    printf("factorial of what number?: ");
    scanf("%d",&input);
    printf("\nThe factorial of %d is %d\n",input, recur_factorial(input));
    */

   /* FIBBONACCI CODE
    int input;
    printf("How many numbers of the fibbonacci sequence would you like to view?: \n");
    scanf("%d",&input);
    printf("\nBase number     fibonacci #\n");
    printf  ("-----------     -----------\n");
    for (int i = 0; i < input; i++)
    {
        printf("     %d              %d\n",i,fibonacciYO(i));
    }
    */
   return EXIT_SUCCESS;
}