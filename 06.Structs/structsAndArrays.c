#include <stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

// Using arrays within a structure:
typedef struct DatesAvailable
{
    Date datesAvailable[12];
    int previousPayments[12];
} DatesAvailable;


void printDate(Date dates[], int size);

int main()
{
    // Structs can be stored in arrays, just like any other data type

    int const datesCount = 5;

    // Like with regular arrays, we do not need to provide all elements
    // In this case, the length of the array is 5, but we provide 3 dates.

    // Initializing Date struct directly when initializing the array itself:
    Date dates[datesCount] = {{8, 11, 1995}, {25, 1, 1993}, {27, 2, 1969}};

    printDate(dates, datesCount); // Prints 3 valid dates and 2 dates with 0s

    // Creating new dates to put in array:
    Date date4 = {3, 2, 1964};
    Date date5 = {12, 4, 1989};

    // Using indexing to fill rest of the array:
    dates[3] = date4;
    dates[4] = date5;

    printf("\n");
    printDate(dates, datesCount); // Prints all 5 dates
}

void printDate(Date dates[], int size)
{
    for(int i = 0; i < size; ++i)
        printf("Date %d: \t%02d-%02d-%02d\n", i + 1, dates[i].day, dates[i].month, dates[i].year);
}