#include <stdio.h>

typedef struct Time
{
    int hours;
    int minutes;
    int seconds;
} Time;

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

typedef struct DateAndTime
{
    Date date;
    Time time;
} DateAndTime;

// A structure can be defined within a structure (cannot use typedef for the nested struct)
// The Tire structure is only in the scope of Car, it doesn't exist elsewhere
typedef struct Car
{
    struct Tire
    {
        int dotNumber;
        Date manufactureDate;
        double size;
    };

    char* color;
    char* model;
    int year;
    struct Tire tireType;
} Car;

int main()
{
    // We can initialize the structs directly in the curly braces:
    DateAndTime now = {{4, 11, 2024}, {12, 4, 34}};

    printf("Today is %02d-%02d-%d %02d:%02d:%02d\n",
        now.date.day, now.date.month, now.date.year, now.time.hours,
        now.time.minutes, now.time.seconds);
        // Today is 04-11-2024 12:04:34

    int const size = 3;
    // An array of nested structs is also possible:
    DateAndTime dates[size] = {now, {{8, 11, 2024}, {16, 22, 20}}, {{25, 1, 2025}, {14, 12, 12}}};

    printf("\n");
    for (int i = 0; i < size; ++i)
    {
        printf("Day %d is %02d-%02d-%d %02d:%02d:%02d\n", i + 1,
        dates[i].date.day, dates[i].date.month, dates[i].date.year, dates[i].time.hours,
        dates[i].time.minutes, dates[i].time.seconds);
    } 
    // Day 1 is 04-11-2024 12:04:34
    // Day 2 is 08-11-2024 16:22:20
    // Day 3 is 25-01-2025 14:12:12

    Date tiresManufactureDate = {2, 4, 2022};
    Car mercedes = {"Black", "S500", 2012, {256, tiresManufactureDate, 18.3}};

    printf("\n");
    printf("%s %s from %d with Tires: Dot number: %d, manufactured on %02d-%02d-%02d with size %.01lf\n",
    mercedes.color, mercedes.model, mercedes.year, mercedes.tireType.dotNumber,
    mercedes.tireType.manufactureDate.day, mercedes.tireType.manufactureDate.month, mercedes.tireType.manufactureDate.year,
    mercedes.tireType.size);
    // Black S500 from 2012 with Tires: Dot number: 256, manafactured on 02-04-2022 with size 18.3
}