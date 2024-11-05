#include <stdio.h>

// Print the total number of lines in a text file

int main()
{
    // Setting up a counter:
    int lines = 0;

    // Opening file
    FILE* file = fopen("../07.FileInputAndOutput/inputRenamed.txt", "r");

    // Checking if file returned null
    if (!file)
    {
        printf("Error reading file!\n");
        return -1;
    }

    // Creating  current character variables for the cases where we don't have
    // a newline character in the end of the text or there are 0 lines:
    char currentCharacter;

    // Read text character by character:
    while ((currentCharacter = fgetc(file)) != EOF)
    {
        // If a newline character is found, increment the counter:
        if (currentCharacter == '\n')
            lines++;

        // Previous character is assigned a value:
    }

    // If the last character was different from a null character or newline:
    if (currentCharacter != '\n' && currentCharacter != '\0')
        lines++;

    printf("This text has %d lines!\n", lines);
    // This text has 10 lines!

    return 0;
}