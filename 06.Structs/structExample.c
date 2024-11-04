#include <stdio.h>
#include <string.h>

// One-off initialization of stuct (this is rarely used):
struct
{
    int day;
    int month;
    int year;
} today, tomorrow;

// Creating a struct using char*, instead of char[]
typedef struct Speaker
{
    char* brand;
    char* model;
    char* type;
    int lowerFrequencyBound;
    int upperFrequencyBound;
    int maximumSPL;
}Speaker;

// Creating and initializing at the same time:
struct Car
{
    int year;
    char brand[25];
    char model[25];
    char fuel[25];
} mercedes, mazda;

// Using typedef to avoid typing struct every time:
typedef struct Person
{
    char name[55];
    int age;
    char profession[55];
}Person;


int main()
{
    printf("Struct Person\n");

    // Curly braces when creating an instance are called Initializer List
    Person hristina = (Person){"Hristina", 31, "Pharmacist"};
    // Cast is optional, as it's redundant in most versions of C

    // We can also initialize like that:
    Person yordan = {.profession =  "Programmer", .name = "Yordan", .age = 28, };

    printf("\tName: %s, Age: %d, Profession: %s\n", hristina.name, hristina.age, hristina.profession);
    // Name: Hristina, Age: 31, Profession: Pharmacist

    printf("\tName: %s, Age: %d, Profession: %s\n", yordan.name, yordan.age, yordan.profession);
    // Name: Yordan, Age: 28, Profession: Programmer

    printf("\n");
    mercedes.year = 2009;

    // To initialize char[] outside of Initializer List, you need to use strcpy()
    strcpy(mercedes.brand, "Mercedes");
    strcpy(mercedes.model, "C180 Kompressor");
    strcpy(mercedes.fuel, "Gasoline");

    mazda.year = 2001;
    strcpy(mazda.brand, "Mazda");
    strcpy(mazda.model, "323f");
    strcpy(mazda.fuel, "Gasoline and Natural Gas");

    printf("Struct Car\n");
    printf("\t%s %s from %d runs on %s\n", mercedes.brand, mercedes.model, mercedes.year, mercedes.fuel);
    // Mercedes C180 Kompressor from 2009 runs on Gasoline

    printf("\t%s %s from %d runs on %s\n", mazda.brand, mazda.model, mazda.year, mazda.fuel);
    // Mazda 323f from 2001 runs on Gasoline and Natural Gas

    today.day = 3;
    today.month = 11;
    today.year = 2024;

    printf("\n");
    printf("Struct today\n");
    printf("\tToday is %02d-%d-%02d\n", today.day, today.month, today.year);
    // Today is 03-11-2024

    printf("\n");
    printf("Struct Speaker\n");

    Speaker dynaudio = {"Dynaudio", "BM5", "Passive", 50, 21000, 125};
    printf("\t%s speaker %s %s with maximum SPL of %d and a frequency range %d - %d Hz\n", 
        dynaudio.type, dynaudio.brand, dynaudio.model, dynaudio.maximumSPL, 
        dynaudio.lowerFrequencyBound, dynaudio.upperFrequencyBound);
    
    // Passive speaker Dynaudio BM5 with maximum SPL of 125 and a frequency range 50 - 21000 Hz
}