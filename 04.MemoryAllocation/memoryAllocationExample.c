#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int length = strlen("MyName") + 1;

    // Allocationg memory for string
    char* string = (char*)malloc(length * sizeof(char));

    // Copying string to allocated memory
    strcpy(string, "MyName");
    printf("String = %s, Address = %p\n", string, string);

    // Reallocating memory to fit a longer string
    string = (char*)realloc(string, length + 4);

    // Concatenate the second string to the first one
    strcat(string, ".com");
    printf("String = %s, Address = %p\n", string, string);

    // Free memory
    free(string);
}