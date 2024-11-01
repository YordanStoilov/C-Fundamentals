#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 10;
    int values[size];

    // No ampersand needed, as values is already a pointer,
    // pointing to the first item of the array
    int *pvalues = values;

    printf("%p\n", pvalues); // 0x16f0b7120

    // Essensially the same thing, with different syntax
    pvalues = &values[0];

    printf("%p\n", pvalues); // 0x16f0b7120 - same address

    // Another way to initialize an array using malloc():
    int* array = malloc(size * sizeof(int));

    array[1] = 10; // Setting value at index 1 to 10
    printf("%d\n", array[1]); // Outputs 10

    *(array + 2) = 42; // Setting value at index 1 to 42

    printf("%d\n", array[2]); // Outputs 42
}