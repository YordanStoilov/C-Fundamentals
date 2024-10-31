#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 60;

    // Defining pointer to x:
    int* px = &x;

    // Setting y to the VALUE of x:
    int y = *px;

    // You can also define pointers along with
    // other values, as long as the pointer points
    // to the same type, for example:

    // Declaring int p and int *q:
    int p, *q;

    // Declaring int* a and int b:
    int* a, b;

}