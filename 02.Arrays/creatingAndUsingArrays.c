#include <stdio.h>

void printArray(int array[], int size);

int main()
{
    // Size has to be constant, otherwise it won't compile
    int const size = 5;
    // Declaring array with space for 5 integers:
    // int arr[size];

    // Explicitly declaring all items of the array:
    // int arr[size] = {1, 2, 3, 4, 5};

    // We can also declare some of the elements and add the rest later
    int arr[size] = {1, 2, 3};
    arr[3] = 4;
    arr[4] = 5;

    printf("Array 1: ");
    printArray(arr, size); // Prints out 1, 2, 3, 4, 5

    // If we don't specify the rest of the values, they are 0 by default:

    int arr2[size] = {1, 2, 3};

    printf("Array 2: ");
    printArray(arr2, size); // Prints out 1, 2, 3, 0, 0

    // Another way to initialize array, which is not available
    // for all compilers and might not work on all IDEs:

    // Selecting which indices will be initialized
    int arr3[size] = {[2] = 5, [1] = 10, [3] = 15};

    printf("Array 3: ");
    printArray(arr3, size); // Prints out 0, 10, 5, 15, 0
}

void printArray(int array[], int size)
{
    printf("{ ");
    for (int i = 0; i < size - 1; ++i)
    {
        printf("%d, ", array[i]);
    }
    printf("%d }\n", array[size-1]);
}