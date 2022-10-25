#include<stdio.h>

int main(void){
    float a, b, c, sum;
    printf("Input 3 Floats: ");
    scanf("%f%f%f", &a,&b,&c);
    sum = a+b+c;
    printf("The sum of your floats is: %f",sum);
}