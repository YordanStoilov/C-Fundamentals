#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

typedef struct Employee
{
    char* name;
    Date hireDate;
    double salary;
} Employee;

void printEmployee(Employee employee);

int main()
{
    Date georgeHireDate = {25, 01, 1993};
    Employee george = {"George", georgeHireDate, 65000.45};

    Date chrisHireDate = {8, 11, 1995};
    Employee chris = {"Chris", chrisHireDate, 80000.32};

    Date jamesHireDate = {14, 3, 1978};
    Employee james = {"James", jamesHireDate, 120000.12};

    Date customEmployeeDate;
    Employee customEmployee;
    customEmployee.name = (char*)malloc(25 * sizeof(char));
    if (customEmployee.name == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Input employee name: \n");
    scanf("%s", customEmployee.name);

    printf("Input employee start day: \n");
    scanf("%d", &customEmployeeDate.day);

    printf("Input employee start month: \n");
    scanf("%d", &customEmployeeDate.month);

    printf("Input employee start year: \n");
    scanf("%d", &customEmployeeDate.year);

    customEmployee.hireDate = customEmployeeDate;

    printf("Input employee salary: \n");
    scanf("%lf", &customEmployee.salary);

    printf("Struct Employee: \n");
    printEmployee(customEmployee);
    printEmployee(george);
    printEmployee(chris);
    printEmployee(james);
}

void printEmployee(Employee employee)
{
    printf("\tEmployee %s, was hired on %02d-%02d-%d, with a yearly salary of $%.2lf\n",
        employee.name, employee.hireDate.day, employee.hireDate.month, employee.hireDate.year,
        employee.salary);
}