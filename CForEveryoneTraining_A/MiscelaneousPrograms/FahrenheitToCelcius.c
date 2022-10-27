#include<stdio.h>

int main(void){

float tempF, tempC;

printf("How many degrees Fahrenheit?");
scanf("%f", &tempF);

tempC = (tempF-32)/1.8;
printf("\n\n%f degrees Fahrenheit is equavalent to %f degrees Celcius.",tempF,tempC);
return 0;
}