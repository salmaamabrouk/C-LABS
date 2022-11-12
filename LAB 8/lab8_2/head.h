#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <windows.h>
#include <time.h>

void gotoxy  (int,int);
void SetColor(int);
int  lay0 (void);
void lay1 (void);
void lay2 (void);
void lay3 (void);

typedef struct Employee
{
    int id;
    int salary;
    int bonus;
    int deduction;
    int net;
    char name[10];
}
 Emp_Struct;

void display(Emp_Struct *, int *);
Emp_Struct* addemp (int *,int *);
