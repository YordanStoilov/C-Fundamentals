#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Person
{
    char* name;
    int age;
} Person;

bool isDifferentPerson(Person*, Person*);
void printPersonComparisonResults(Person*, Person*);
Person createPeter();

int main()
{
    // Creating 3 instances of Person:
    Person person1 = {"Chris", 22};
    Person person2 = {"Mike", 18};
    Person person3 = {"Mike", 18};
    
    // Passing the addresses of Person instances to the function:
    printPersonComparisonResults(&person1, &person2);
    // Chris, 22 is different from Mike, 18

    printPersonComparisonResults(&person2, &person3);
    // Mike, 18 is the same as Mike, 18

    Person peter = createPeter();

    printf("Person with name %s is %d years old\n", peter.name, peter.age);
    // Person with name Peter is 29 years old 
}

// Passing Person objects by reference
bool isDifferentPerson(Person* person1, Person* person2)
{
    if (strcmp(person1->name, person2->name) == 0 && person1->age == person2->age)
        return false;
    return true;
}

// Passing Person objects by reference
void printPersonComparisonResults(Person* person1, Person *person2)
{
    if (isDifferentPerson(person1, person2))
    {
        printf("%s, %d is different from %s, %d\n", person1->name, person1->age,
        person2->name, person2->age);
    }
    else
    {
        printf("%s, %d is the same as %s, %d\n", person1->name, person1->age,
        person2->name, person2->age);
    }
}

// Creating a function that returns a Person struct
Person createPeter()
{
    Person peter = {"Peter", 29};
    return peter;
}