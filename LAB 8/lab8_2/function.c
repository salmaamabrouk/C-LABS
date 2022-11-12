#include "head.h"

void gotoxy(int x,int y)
{
    COORD coord = {0,0};
    coord.X = x;
    coord.Y  =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void SetColor(int ForgC)
{
    WORD color;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        color = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, color);
    }
    return;
}

int lay0(void)
{
    int n;
    system ("cls");
    SetColor (90);
    printf ("Please enter number of employees\n");
    scanf ("%d", &n);
    SetColor (15);
    return n;
}

void lay1(void)
{
    system ("cls");
    SetColor (90);
    printf ("Use the four arrows to navigate\n");
    SetColor (140);
    gotoxy(50,7);
    printf("New Employee\n");
    SetColor (15);
    gotoxy(44,12);
    printf("Display current Employees\n");
    gotoxy(53,17);
    printf("Exit\n");
}

void lay2 (void)
{

    system ("cls");
    SetColor (90);
    printf ("Use the four arrows to navigate\n");
    SetColor (15);
    gotoxy(50,7);
    printf("New Employee\n");
    SetColor (140);
    gotoxy(44,12);
    printf("Display current Employees\n");
    SetColor (15);
    gotoxy(53,17);
    printf("Exit\n");
}

void lay3 (void)
{

    system ("cls");
    SetColor (90);
    printf ("Use the four arrows to navigate\n");
    SetColor (15);
    gotoxy(50,7);
    printf("New Employee\n");
    gotoxy(44,12);
    printf("Display current Employees\n");
    SetColor (140);
    gotoxy(53,17);
    printf("Exit\n");
    SetColor (15);
}

Emp_Struct* addemp (int *pt,int *x)
{
    Emp_Struct *in = (Emp_Struct *) malloc((*pt)*sizeof(int));
    SetColor (2);
    printf("Please enter employee number (%d) ID\n",*x+1);
    scanf ("%d", &in->id);
    printf("Please enter employee number (%d) Name\n",*x+1);
    fflush(stdin);
    fgets (in->name,15,stdin);
    printf("Please enter employee number (%d) salary\n",*x+1);
    scanf ("%d", &in->salary);
    printf("Please enter employee number (%d) bonus\n",*x+1);
    scanf ("%d", &in->bonus);
    printf("Please enter employee number (%d) deduction\n",*x+1);
    scanf ("%d", &in->deduction);
    in->net = in->salary + in->bonus - in->deduction;
    (*x)++;
    SetColor (15);
    printf ("bef:  %d\n",(*(in+0)).id);
    return in;
}

void display(Emp_Struct *dis, int *j)
{
    int i;
    system ("cls");
    SetColor (3);
    for (i=0; i<(*j); i++)
    {
        printf("\tEmployee (%d):\n",i+1);
        printf ("ID: %d\n Name: %s Net salary: %d\n",dis->id,dis->name,dis->net);
    }
}
