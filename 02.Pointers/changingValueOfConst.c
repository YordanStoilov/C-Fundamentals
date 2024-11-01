#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 15;
    // this declaration means that the pointer cannot CHANGE the value of a
    const int* pa = &a;
    // *pa = 10; // Compiler won't allow it, but we can change it like that:
    a = 10;

    // this declaration means that the pointer cannot change what it's pointing to
    int* const pb = &a;
    // pb = &b; // Compiler won't allow it

    printf("%d\n", a); // Outputs 10

    // When using a const pointer, we can only change the value of a
    // from a itself, not from pa pointer (since it is const)
}