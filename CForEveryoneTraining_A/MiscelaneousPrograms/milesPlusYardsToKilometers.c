#include<stdio.h>

int main(void){

float miles, yards, kilometers;

printf("How many miles?");
scanf("%f", &miles);
printf("\nhow many yards?");
scanf("%f", &yards);

kilometers = 1.60934 * (miles+yards/1760);
printf("\n\nThere are %f kilometers in %f miles and %f yards.\n", kilometers, miles, yards);
return 0;

}