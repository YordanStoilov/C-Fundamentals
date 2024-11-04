#include <stdio.h>

typedef struct Car
{
    int year;
    char* brand;
    char* model;
    char* fuel;
    double engineSize;
    char* engineType;
} Car;

void printCarData(Car* car);

int main()
{
    Car audi = {2011, "Audi", "A4", "Petrol", 2.0, "Turbocharged"};
    Car lexus = {2008, "Lexus", "RX400h", "Hybrid", 3.3, "Naturally Aspirated"};

    Car *pAudi = &audi;
    Car *pLexus = &lexus;

    // We can change the value of any property with the "->" operator:
    pAudi->year = 2010;

    // Or like this, but it's redundant:
    (*pLexus).year = 2009;

    printf("Struct Car:\n");
    printCarData(pAudi);
    printCarData(pLexus);

    // Struct Car:
        // Audi A4 from 2010 with a 2.0L Turbocharged Petrol engine
        // Lexus RX400h from 2009 with a 3.3L Naturally Aspirated Hybrid engine
}

void printCarData(Car* car)
{
    printf("\t%s %s from %d with a %.1lfL %s %s engine\n", car->brand, car->model, car->year, car->engineSize, car->engineType, car->fuel);
}