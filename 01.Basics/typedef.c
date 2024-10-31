#include <stdio.h>
#include <stdlib.h>

// Using typedef to shorten names of data types
typedef unsigned char Byte;
typedef char* String;

// Using typedef to set alias for enum
typedef enum
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} Month;

int main()
{
    Byte age = 28;
    String name = "Yordan";
    Month month = NOV;

    printf("My name is %s and I am %d years old!\n", name, age);
    printf("I was born in month %d\n!",month);
}