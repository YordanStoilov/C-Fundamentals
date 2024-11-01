#include <stdio.h>
#include <stdlib.h>

int getStringLength(char* text)
{
    int sum = 0;
    while (*text)
        *text++, sum++;
    return sum;
}

int getStringLengthByArithmetic(char* text)
{
    char* start = text;
    while (*text)
        text++;
    
    // Difference between the two pointers
    // divided by the size of a character
    // to find the number of characters
    return (text - start) / sizeof(char);
}

int main()
{
    char* text = "How long am I?";

    printf("Sentence is %d symbols long\n", getStringLength(text));
    printf("Sentence is %d symbols long: Function 2\n", getStringLengthByArithmetic(text));
}
    