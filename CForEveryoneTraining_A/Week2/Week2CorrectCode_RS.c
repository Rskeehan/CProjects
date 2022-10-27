#include<stdio.h>
#include<math.h>

int main(void)
{ 
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("Volume is : %lf \n\n", 4 *radius*radius*radius*M_PI/3 );
return 0;
}