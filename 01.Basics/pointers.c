#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 60;

    // Defining pointer to x:
    int* px = &x;

    // Setting y to the VALUE of x
    // by dereferencing px:
    int y = *px;

    // Using the asterisk for both multiplication
    // and dereferencing might get confusing:
    y = 2 * (*px);
    printf("%d\n", y); // Outputs 120

    // You can also define pointers along with
    // other values, as long as the pointer points
    // to the same type, for example:

    // Declaring int p and int *q:
    int p, *q;

    // Declaring int* a and int b:
    int* a, b;

    // Displaying pointer:
    printf("%p\n", px); // Returns in hexadecimal the address px points to

    // Displaying address of variables:
    printf("%p\n", &y); // Returns in hexadecimal the address of y

    // Display the address of the pointer itself:
    // Since &px returns a pointer to a pointer, we cast it to void*
    printf("%p\n", (void*)&px); // Returns in hexadecimal the address of px itself

    // Getting the size of a pointer in memory
    printf("px size: %d bytes or %d bits.\n", (int)sizeof(px), ((int)sizeof(px) * 8));
}