#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;

    printf("Input length of string: \n");
    scanf("%d", &size);

    // Clearing buffer
    getchar();

    // Extra byte for the sentinel value
    char* string = (char*)malloc((++size) * sizeof(char));
    if (!string)
    {
        fprintf(stderr, "Memory reallocation failed\n");
        return -1;
    }

    printf("Input string: \n");
    if (!fgets(string, size, stdin))
    {
        fprintf(stderr, "Error in handling input!\n");
        return -1;
    }
    
    printf("Your string is %s\n", string);
    // Free memory
    free(string);
    // Set pointer to null
    string = NULL;
    // Always do that, even if the program ends right after!!!
}