#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printEachChar(char* string)
{
    // Continue loop until we hit the sentinel value
    // or "null character" which signifies end of the string
    while (*string)
        printf("%c\n", *string++);
}

void copyString(char* source, char* destination)
{
    while(*source)
        *destination++ = *source++;
    *destination = '\0';
}

int main()
{
    char* name = "My name is..";

    // Slicing string (starting from the second character onwards):
    printf("%s\n", name + 1); // "y name is.."

    // Printing single char:
    printf("%c\n", *name); // 'M

    printEachChar(name);

    // Allocate memory for a second string
    // The length should be +1 to account for the null character:
    char* copyOfName = (char*)malloc(sizeof(char) * strlen(name) + 1);
    copyString(name, copyOfName);

    printf("Value of copy: %s\n", copyOfName);
}