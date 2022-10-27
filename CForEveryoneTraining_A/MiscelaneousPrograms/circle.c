#include<stdio.h>

#define PI 3.14159

int main(void) {

    double area =0.0, radius = 0.0;
    printf("Enter the radius: ");
    scanf("%lf",&radius);
    area = PI * radius * radius;
    printf("The area of the circle with a radius of %f is %f",radius,area);
    return 0;
    
}