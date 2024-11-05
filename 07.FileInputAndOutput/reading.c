#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // By default, the file is assumed to be in the same directory
    char* fileName = "../07.FileInputAndOutput/inputRenamed.txt";

    // Mode "r" for reading:
    FILE* file = fopen(fileName, "r");

    // fopen() returns NULL if there was an error, so always check:
    if (!file)
    {
        printf("Cannot open file!\n");
        return -1;
    }

    // Creating a buffer to hold a piece of the text every iteration
    // This is beneficial, because reading the whole file at once
    // may lead to problems (if the file is to big) 
    char buffer[55];

    // fgets() returns NULL when it gets to the end of the file,
    // so the loop breaks when there is no more text to read
    while (fgets(buffer, sizeof(buffer), file))
        printf("%s", buffer);
    
    printf("\n");
    printf("----------------------------------------------------\n");

    // Always make sure to close the file after finishing with it:
    // fclose() returns 0 if successful
    if (fclose(file))
        printf("Error! File was not closed!\n");
    else
        printf("File closed successfully!\n");

    return 0;

    // At least the whisper goes so: our last king,
    // Whose image even but now appeared to us,
    // Was, as you know, by Fortinbras of Norway,
    // Thereto pricked on by a most emulate pride,
    // Dared to the combat; in which our valiant Hamlet
    // (For so this side of our known world esteemed him)
    // Did slay this Fortinbras, who by a sealed compact,
    // Well ratified by law and heraldry,
    // Did forfeit, with his life, all ⟨those⟩ his lands
    // Which he stood seized of, to the conqueror.
    // ----------------------------------------------------
    // File closed successfully!
}