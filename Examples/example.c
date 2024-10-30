#include <stdio.h>

int main() {
    char string[45];
    int age = 25;

    printf("Enter your name: ");
    fgets(string, sizeof(string), stdin);

    printf("Hello, %s\n", string);
    return 0;
}
