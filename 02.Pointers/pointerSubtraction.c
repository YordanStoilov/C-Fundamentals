#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 15;

    printf("The difference between a and b is %d bytes\n", b - a);

    printf("The address 4 integers from a is %p\n", &a + 4);
}