#include <stdio.h>

int main()
{
    // Need to go back one folder, because the program counts relative to the build folder
    char* initialName = "../07.FileInputAndOutput/input.txt";
    char* newName = "../07.FileInputAndOutput/inputRenamed.txt";
    // renaming file:
    rename(initialName, newName);
}