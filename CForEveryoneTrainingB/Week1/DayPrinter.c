#include <stdio.h>

enum day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
}; // declare type

typedef enum day day;

void printDayByNumber(day d)
{
    switch (d)
    {
        d = d % 7; // return

    case Sun:
        printf(" Sunday\n");
        break;
    case Mon:
        printf(" Monday\n");
        break;
    case Tue:
        printf(" Tuesday\n");
        break;
    case Wed:
        printf(" Wednday\n");
        break;
    case Thu:
        printf(" Thuday\n");
        break;
    case Fri:
        printf(" Friday\n");
        break;
    case Sat:
        printf(" Saturday\n");
        break;
    default:
        printf("you entered an incorrect value.\n");
        break;
    }
}

day nextDay(day d)
{
    day tomorrow = d;
    tomorrow = d % 7 + 1;
    return tomorrow;
};

int main()
{
    day today = Fri;
    printDayByNumber(today);
    day tomorrow = nextDay(today);
    printDayByNumber(tomorrow);
    return 0;
}