#include <stdio.h>
#include <stdlib.h>

// enum menu
// {
//     Tea = 10,
//     Coffee = 20,
//     Juice = 30,
//     Beer = 40
// };

// int main()
// {
//     enum menu me = Coffee;
//     enum menu them = Beer;

//     printf("I ordered %d\n", me);
//     printf("They ordered %d\n", them);

//     return 0;
// }

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    printf("My favourite month is %d\n", JAN);
}