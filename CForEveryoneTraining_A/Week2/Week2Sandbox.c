#include <stdio.h>
#include <stdlib.h>

int main () {
    short shortA=5;
    int normA=67;
    unsigned unsA=67u;
    long longA=67l;

    printf("shortA = %hd, divide by int 2 is %d\n",shortA,shortA/2);
    printf("shortA = %hd, divide by float 2 is %lf\n",shortA,shortA/2.0);
    printf("67 as a char is %c\n",normA);
    printf("sizes in bytes of short, int, unsigned, and long on my machine:\n");
    printf("%lu, %lu, %lu, %lu",sizeof(shortA), sizeof(normA), sizeof(unsA), sizeof(longA));
    return 0;
}

