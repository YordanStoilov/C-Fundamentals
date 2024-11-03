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

    // Reallocating memory to fit a longer string:

    // Always use a temporary variable, because in case of
    // not enough memory, realloc returns null
    // and this will lead to a memory leak
    char* temp = (char*)realloc(string, length + 4);
    
    if (temp)
        // If temp is not NULL, assign to it the value of temp
        string = temp;
    else
    {
        // If it's null, print error message
        fprintf(stderr, "Memory reallocation failed\n");
        return -1;
    }

    // Concatenate the second string to the first one
    strcat(string, ".com");
    printf("String = %s, Address = %p\n", string, string);

    // Free memory
    free(string);
}