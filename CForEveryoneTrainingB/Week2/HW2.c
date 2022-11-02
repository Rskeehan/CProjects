#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
    return maxDaysInMonth;
}

month nextMonth(month m)
{
    month Nm; // variable for next month
    switch (m)
    {

    case Jan:
        Nm = Feb;
        break;
    case Feb:
        Nm = Mar;
        break;
    case Mar:
        Nm = Apr;
        break;
    case Apr:
        Nm = May;
        break;
    case May:
        Nm = Jun;
        break;
    case Jun:
        Nm = Jul;
        break;
    case Jul:
        Nm = Aug;
        break;
    case Aug:
        Nm = Sep;
        break;
    case Sep:
        Nm = Oct;
        break;
    case Oct:
        Nm = Nov;
        break;
    case Nov:
        Nm = Dec;
        break;
    default:
        Nm = Jan;
        break;
    }
    return Nm;
}

void printdate(date date)
{
    char monthNames[][9] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf(" %s %i. \n", monthNames[date.m], date.d);
}

void printTodayandTomorrow(date inDate)
{
    date nextDay;

    int daysInMonth = getMaxDays(inDate.m); // get max days in the month for future calc.

    printf("The current date is:");
    printdate(inDate);

    // print tomorrow's value:
    if (inDate.d + 1 > daysInMonth)
    {
        nextDay.m = nextMonth(inDate.m);
        nextDay.d = 1;
    }
    else
    {
        nextDay.m = inDate.m;
        nextDay.d = inDate.d + 1;
    }

    printf("Tomorrow's date is:");
    printdate(nextDay);
}

int main()
{
    date date1 = {Feb, 28};
    date date2 = {Mar, 14};
    date date3 = {Nov, 31};
    date date4 = {Dec, 31};

    printTodayandTomorrow(date1);
    printTodayandTomorrow(date2);
    printTodayandTomorrow(date3);
    printTodayandTomorrow(date4);

    return 0;
}