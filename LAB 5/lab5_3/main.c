#include <stdio.h>
#include <stdlib.h>
#define size 5
///////////////////////////////////////////////////////////////////////////////////////
//Employee with Functions (try to divide Ass#2 into 2 functions):
//	struct Employee AddNewEmployee();
//	void DisplayEmployee(struct Employee);
/////////////////////////////////////////////////////////////////////

typedef struct Employee
{
    char name[15];
    int id;
    int salary;
    int net;
    int bonus;
    int deduction;
}

 Emp_Struct;

void  addemp (Emp_Struct add [], int i)
{
    int j;
    for (j = 0; j < i; j++)
    {

    printf("Please enter the employee number (%d) ID\n",j+1);
    scanf ("%d", &add[j].id);
    printf("Please enter the employee number (%d) Name\n",j+1);
    fflush(stdin);
    fgets (add[j].name,15,stdin);
    printf("Please enter the employee number (%d) salary\n",j+1);
    scanf ("%d", &add[j].salary);
    printf("Please enter the employee number (%d) bonus\n",j+1);
    scanf ("%d", &add[j].bonus);
    printf("Please enter the employee number (%d) deduction\n",j+1);
    scanf ("%d", &add[j].deduction);
    add[j].net = add[j].salary + add[j].bonus - add[j].deduction;

    }

}

void display(Emp_Struct dis [],int i)
{
    int j;
    for (j = 0; j < i; j++)
    {
    printf("\tEmployee (%d):\n", j + 1);
    printf ("Employee ID: %d\nEmployee Name: %sEmployee Net salary: %d\n", dis[j].id, dis[j].name, dis[j].net);
    }
}

int main()
{
    int i;
    Emp_Struct emp[size];

    addemp(emp, size);

    display(emp, size);

    return 0;
}
