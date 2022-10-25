#include <stdio.h>
/*
use this program to sort an array
*/

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s",str);

    for (i = 0; i < how_many; i++)
    {
        printf("%d\t",data[i]);
    }
}

void bubble(int data[],int count){
    int i, j;
    int go_on;

    for (i = 0; i < count; i++)
    {
        print_array(count,data,"\ninside bubble\n");
        printf("i= %d, input any int to to continue:",i);

        scanf("%d",&go_on);
        for (j=count - 1; j>i ; j--) {
            if (data[j-1]>data[j])
            {
                swap(&data[j-1],&data[j]);
            }
        }
    }
    
}

int main (void) {
    const int SIZE = 5;

    int grades[]={78, 67, 92, 83, 88};

    print_array(SIZE,grades,"My Grades:\n");
    printf("\n\n");
    bubble(grades,SIZE);
    print_array(SIZE, grades,"My sorted Grades:");
    printf("\n\n");

    return 0;
}