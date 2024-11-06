#include <stdio.h>

int main()
{
    // Open file in writing mode:
    FILE* file = fopen("../07.FileInputAndOutput/output.txt", "w");

    // In this case, I'm using fputs(), but if i wanted to include 
    // format specifiers, I would use fprintf()
    // Both functions return EOF (or -1) if there's an error
    if (fputs("I wrote this from code!\nGoodbye!\0", file) == EOF)
    {
        printf("Error writing to file!\n");
        return -1;
    }
    // output.txt now says:
    // I wrote this from code!
    // Goodbye!

    // Don't forget to close the file!
    fclose(file);
    file = NULL;
}