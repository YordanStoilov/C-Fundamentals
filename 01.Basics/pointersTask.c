#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 42;
    int *px = NULL;

    px = &x;

    // Address of value:
    printf("Address of variable is %p\n", &x);

    // Address of pointer:
    printf("Address of pointer is %p\n", (void*)&px); // Added cast for readability

    // Value of pointer:
    printf("Value of pointer is %p\n", px);

    // Value of what the pointer is pointing to:
    printf("Value to which px points to is %d\n", *px);

}