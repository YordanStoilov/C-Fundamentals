#include <stdio.h>
#include <stdlib.h>

void squareRoot(int* number)
{
    *number *= *number;
}

int main()
{
    int x;

    printf("Input a number to square up: \n");
    scanf("%d", &x);
    squareRoot(&x);
    printf("%d\n", x);
}