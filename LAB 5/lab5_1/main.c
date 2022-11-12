#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////
// C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction), and display his code, name along with his net salary. (Emp_Struct)
////////////////////////////////////////////////////////////

struct employee{
    char    name[30];
    int     empId;
    float   salary;
    float   bonus;
    float   deduction;


};

int main()
{
    struct employee emp;

    printf("Please enter your information :\n");
    printf("Name ?:");
    gets(emp.name);
    printf("ID ?:");
    scanf("%d",&emp.empId);
    printf("Salary ?:");
    scanf("%f",&emp.salary);
    printf("Bonus ?:");
    scanf("%f",&emp.bonus);
    printf("Deduction ?:");
    scanf("%f",&emp.deduction);

    printf("\nEntered information is:");

    int net_salary = emp.salary + emp.bonus - emp.deduction ;
    printf("\nID: %d, \nName: %s, \nNet Salary: %d", emp.empId, emp.name, net_salary);

    return 0;
}
