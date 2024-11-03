#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByValue(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValueBitwise(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int x = 5;
    int y = 42;

    printf("--------------------------\n");
    printf("Before: X is %d and Y is %d\n", x, y);

    // Try to swap values by value
    swap(x, y);
    printf("After : X is %d and Y is %d\n", x, y);
    // Not swapped, since they are being passed by value in the function

    printf("--------------------------\n");
    printf("Before: X is %d and Y is %d\n", x, y);

    // We are passing the addresses of x and y to the function
    swapByValue(&x, &y);
    printf("After : X is %d and Y is %d\n", x, y);

    // The values are now swapped

    // Extra: Also works with bitwise operations
    printf("--------------------------\n");
    printf("Before: X is %d and Y is %d\n", x, y);

    // Again passing the addresses of x and y to the function,
    // which now uses bitwise operations to swap
    swapByValueBitwise(&x, &y);
    printf("After : X is %d and Y is %d\n", x, y);
}