#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum month
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
} month;

typedef struct date
{
    month m;
    int d
} date; // defines the structure of date

int getMaxDays(month m)
{
    int maxDaysInMonth;
    switch (m)
    {
    // months with 31 days
    case Jan:
    case Mar:
    case May:
    case Jul:
    case Aug:
    case Oct:
    case Dec:
        maxDaysInMonth = 31;
        break;
    // months with 30 days
    case Apr:
    case Jun:
    case Sep:
    case Nov:
        maxDaysInMonth = 30;
        break;

    // months with 28 days
    default:
        maxDaysInMonth = 28;
        break;
    }
}

void printdate(date date)
{
    
    const char* monthNames = {"January", "February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s", date.m);
    printf("%s",monthNames[date.m]);
    printf(" %s %g.", monthNames[date.m], date.d);
}

int main()
{
    date date1 = {Feb,28};
    date nextDay;

    int daysInMonth = getMaxDays(date1.m); // get max days in the month for future calcs.

    printf("The current date is");
    printdate(date1);


    //printf("and tomorrow is") 

    return 0;
}