#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // Read a text file and change it, so that all of its characters are lowercase
    
    char* inputDirectory = "../07.FileInputAndOutput/inputRenamed.txt";
    char* tempDirectory = "../07.FileInputAndOutput/temp.txt";

    // Opening the input file and the temp file:
    FILE* file = fopen(inputDirectory, "r");
    FILE* temp = fopen(tempDirectory, "w");

    if (!file || !temp)
    {
        printf("Operation was not successful!\n");
        return -1;
    }

    // Reading character by character and writing to the temp
    char currentChar;
    while ((currentChar = fgetc(file)) != EOF)
    {
        if (islower(currentChar))
            currentChar -= 32;
        fputc(currentChar, temp);
    }

    // Removing the original txt file
    remove(inputDirectory);
    // Renaming temp to the initial input file name
    rename(tempDirectory, inputDirectory);

    // Don't forget to close files!
    fclose(file);
    fclose(temp);

    // inputRenamed.txt:

    // AT LEAST THE WHISPER GOES SO: OUR LAST KING,
    // WHOSE IMAGE EVEN BUT NOW APPEARED TO US,
    // WAS, AS YOU KNOW, BY FORTINBRAS OF NORWAY,
    // THERETO PRICKED ON BY A MOST EMULATE PRIDE,
    // DARED TO THE COMBAT; IN WHICH OUR VALIANT HAMLET
    // (FOR SO THIS SIDE OF OUR KNOWN WORLD ESTEEMED HIM)
    // DID SLAY THIS FORTINBRAS, WHO BY A SEALED COMPACT,
    // WELL RATIFIED BY LAW AND HERALDRY,
    // DID FORFEIT, WITH HIS LIFE, ALL ⟨THOSE⟩ HIS LANDS
    // WHICH HE STOOD SEIZED OF, TO THE CONQUE
}