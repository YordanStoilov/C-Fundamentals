#include <stdio.h>
#include <stdlib.h>

int cumulativeSum(int limit)
{
    int result = 0;
    for (size_t i = 1; i < limit; i++)
    {
        result += i;
    }
    return result;
}

int main()
{
    int number = 0;
    int factor = 2;

    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("Before multiplication: %d\n", number);
    number *= factor;
    printf("After multiplication: %d\n", number);

    int sum = cumulativeSum(number);

    printf("Cumulative sum of %d: %d\n", number, sum);
    return 0;
}
