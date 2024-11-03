#include <stdio.h>

void printArray(int[], int);

int main()
{
    // Row and col must be constant, otherwise it won't compile
    int const row = 3;
    int const col = 4;

    // Declaring a 2-D array with 3 rows and 4 columns:
    int matrix[row][col];

    // Explicitly initializing a matrix:
    int numbers[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Printing matrix:
    printf("Matrix 1: \n");
    for (int i = 0; i < row; ++i)
        printArray(numbers[i], col);

    printf("\n");
    // It's not necessary to initialize all values, like with normal arrays
    int numbers2[row][col] = {
        {1, 2},
        {5, 6},
        {9, 10}
    };

    printf("Matrix 2: \n");
    for (int i = 0; i < row; ++i)
        printArray(numbers2[i], col); // The uninitialized values are 0s

    // It can also be initialized like so:
    int numbers3[row][col] = {[0][0] = 25, [0][1] = 13, [1][2] = 24};

    printf("\n");
    printf("Matrix 3: \n");
    for (int i = 0; i < row; ++i)
        printArray(numbers3[i], col); // Only specified values are initialized

    // 3-D array:
    int depth = 5;
    int box[row][col][depth]; // 3 x 4 x 5
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