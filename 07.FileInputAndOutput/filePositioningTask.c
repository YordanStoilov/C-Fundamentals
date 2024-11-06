#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Print to the console the contents of a file in reverse

    char* inputDestination = "../07.FileInputAndOutput/inputRenamed.txt";
    FILE* file = fopen(inputDestination, "r");

    // Going to the end of file:
    fseek(file, 0, SEEK_END);
    long position = ftell(file);

    while (position > 0)
    {
        // Decrementing position
        position--;

        // Going to decremented position
        fseek(file, position, SEEK_SET);

        char character = fgetc(file);
        if (character != EOF)
            printf("%c", character);
        else
        {
            printf("Error reading file!\n");
            return -1;
        }
    }
    printf("\n");

    // Don't forget to close the file!
    fclose(file);

    // Output on console:

    // EUQNOC EHT OT ,FO DEZIES DOOTS EH HCIHW
    // SDNAL SIH (ESOHT) LLA ,EFIL SIH HTIW ,TIEFROF DID
    // ,YRDLAREH DNA WAL YB DEIFITAR LLEW
    // ,TCAPMOC DELAES A YB OHW ,SARBNITROF SIHT YALS DID
    // )MIH DEMEETSE DLROW NWONK RUO FO EDIS SIHT OS ROF(
    // TELMAH TNAILAV RUO HCIHW NI ;TABMOC EHT OT DERAD
    // ,EDIRP ETALUME TSOM A YB NO DEKCIRP OTEREHT
    // ,YAWRON FO SARBNITROF YB ,WONK UOY SA ,SAW
    // ,SU OT DERAEPPA WON TUB NEVE EGAMI ESOHW
    // ,GNIK TSAL RUO :OS SEOG REPSIHW EHT TSAEL TA
}