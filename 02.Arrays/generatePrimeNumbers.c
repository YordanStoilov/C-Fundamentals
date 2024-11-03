#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);
void printArray(int[], int);

int main()
{
    int const size = 25;
    int primes[size] = {2, 3};

    int count = 2;
    for (int i = 4; i <= 100; ++i)
    {
        if (i % 2 == 0)
            continue;

        if (isPrime(i))
            primes[count++] = i;
    }

    printf("Prime numbers up to 100: \n");
    printArray(primes, 25);
}

bool isPrime(int n)
{
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
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