#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
    THRUST_NONE,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20
} Thrust;

int main()
{
    Thrust thrust = THRUST_NONE;
    printf("Standing by... current thrust: %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Take off... current thrust: %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Exiting Earth... current thrust: %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Out in space... current thrust: %d\n", thrust);
}