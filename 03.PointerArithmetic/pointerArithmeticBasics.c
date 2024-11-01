#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[], const int size)
{
    int sum = 0;

    // We can directly modify a value in the array from 
    // a function, because when it enters it, it decays to a pointer:
    array[1] = 5;

    int* const arrayEnd = array + size;
    for (int *ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;
    return sum;
}

int main()
{
    const int size = 3;
    // Essensially an array is a pointer to the first element
    int array[size] = {1, 2, 3};

    // We can either access the element through pointer arithmetic:
    printf("%d\n", *(array + 1)); // Outputs 2

    // Or with indexing:
    printf("%d\n", array[1]); // Also outputs 2 

    // Can also be used to set values:
    *(array + 2) = 24;

    printf("%d\n", array[2]); // Outputs 24

    printf("%d\n", arraySum(array, size)); // Outputs 30 (1 + 5 + 24)

    // Declare an array as a pointer:
    int* array2 = (int*)malloc(sizeof(int) * 10);

    // Filling array with numbers from 1 to 10
    for (int* p = array2; p < array2 + 10; p++)
    {
        *p = p - array2 + 1;
    }

    // Accessing values by index:
    printf("%d\n", array2[3]); // Outputs 4
}