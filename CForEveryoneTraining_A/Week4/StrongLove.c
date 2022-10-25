#include <stdio.h>
#include <stdlib.h>

void wrt_very(int count){
    /*executes a writeline for the defined input*/
    for (int i = 0; i < count; i++)
    {
        printf("\n very");
    }
}

int main (void) {
    int repeat = 0;
    //read in user input
    printf("How strong is your love? (input 1-10): ");
    scanf("%d",&repeat);

    //print out output
    printf("\nI love you very");
    wrt_very(repeat);
    printf(" much! <3\n\n");
    printf("This program will now end. but my love wont. <3\n");
    scanf("%s",&repeat);
    return EXIT_SUCCESS;
}