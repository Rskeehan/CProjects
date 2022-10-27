#include <stdio.h>

int main (int argc, char *argv[]) {
    int i, j, n;
    i=1;j=2;
    n=i,j+1;
    printf("%i",n);
    return 0;
}