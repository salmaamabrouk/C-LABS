#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<windows.h>
#include <time.h>
/////////////////////////////////////////
//Highlight Menu: New Colored Menu "with Arrows"
/////////////////////////////////////////
void gotoxy(int x, int y)
{
    COORD coord = {0,0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void layout1 (void);
void layout2 (void);
void layout3 (void);
void opt1 (void);
void opt2 (void);

void layout1 (void)
{
    system ("cls");
    SetColor (90);
    gotoxy(42, 1);
    printf ("Use the four arrows to navigate\n");
    SetColor (140);
    gotoxy(50, 5);
    printf("Option 1\n");
    SetColor (15);
    gotoxy(50, 10);
    printf("Option 2\n");
    gotoxy(51, 15);
    printf("Exit\n");
}

void layout2 (void)
{

    system ("cls");
    SetColor (90);
    gotoxy(42, 1);
    printf ("Use the four arrows to navigate\n");
    SetColor (15);
    gotoxy(50, 5);
    printf("Option 1\n");
    SetColor (140);
    gotoxy(50, 10);
    printf("Option 2\n");
    SetColor (15);
    gotoxy(51, 15);
    printf("Exit\n");
}

void layout3 (void)
{
    SetColor (90);
    gotoxy(50, 1);
    printf ("Use the four arrows to navigate\n");
    SetColor (15);
    gotoxy(50, 5);
    printf("Option 1\n");
    gotoxy(50, 10);
    printf("Option 2\n");
    SetColor (140);
    gotoxy(51, 15);
    printf("Exit\n");
    SetColor (15);
}


void opt1 (void)
{
    system ("cls");
    SetColor (3);
    gotoxy(45, 12);
    printf("YOU ARE NOW INSIDE OPTION 1\n");
}


void opt2 (void)
{
    system ("cls");
    SetColor (3);
    gotoxy (45, 12);
    printf("YOU ARE NOW INSIDE OPTION 2\n");
}

int main()
{
    char option1;
    int page;
    char input;
    int lay;
    int exit = 0;
    layout1 ();
    lay = 1;
    page = 0;

    do
    {
        input = getch();

        if (80 == input && 0 == page)
        {
            switch (lay)
            {

            case 1 :
                layout2 ();
                lay = 2;
                break;
            case 2 :
                layout3 ();
                lay = 3;
                break;
            case 3 :
                layout1 ();
                lay = 1;
                break;
            }
        }
        else if (72 == input && 0 == page)
        {
            switch (lay)
            {

            case 1 :
                layout3 ();
                lay = 3;
                break;
            case 2 :
                layout1();
                lay = 1;
                break;
            case 3 :
                layout2 ();
                lay = 2;
                break;
            }
        }
        else if ((77 == input || 75 == input) && 1 == lay)
        {
            switch (page)
            {
            case 0 :
                opt1 ();
                page = 1;
                break;
            case 1:
                layout1 ();
                page = 0;
            }
        } else if ((77 == input || 75 == input) && 2 == lay)
        {
            switch (page)
            {
            case 0 :
                opt2 ();
                page = 1;
                break;
            case 1:
                layout2 ();
                page = 0;
            }
        } else if (3 == lay && (77 == input || 75 == input))
        {
            exit = 1;
        }
    }
    while (0 == exit);
    return 0;
}

