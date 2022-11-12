#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
////////////////////////////////////////////////////////////////
//C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)
////////////////////////////////////////////////////////////////
void get_data();
void print_data(int);

typedef struct Employee
{
    int id, salary;
    char name[20];
}

Employee;
Employee emp_array[SIZE];

int main()
{
    int length;
    printf("How many employees ? ");
    scanf("%d", &length);
    get_data(length);
    print_data(length);

    return 0;
}
void get_data(int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("Employee %d info\n", i + 1);
        printf("Employee Name: ");
        scanf("%s", emp_array[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp_array[i].id);
        printf("Employee Salary: ");
        scanf("%d", &emp_array[i].salary);

    }
}
void print_data(int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("\n");
        printf("Employee Name: %s\n", emp_array[i].name);
        printf("Employee ID: %d\n", emp_array[i].id);
        printf("Employee Salary: %d\n", emp_array[i].salary);

    }
}
