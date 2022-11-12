#include "head.h"
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Employee with Dynamic Allocation and Highlight Menu (allow the user to specify the size of array at runtime).
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char option1;
    int page = 0;
    char input;
    int lay;
    int exit = 0;
    char arro [2];
    int chk;
    int optclr = 100;
    int filled = 0;
    int j = 0;
    int size = lay0();
    Emp_Struct *emp;
    lay1();
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
                lay2 ();
                lay = 2;
                break;
            case 2 :
                lay3();
                lay = 3;
                break;
            case 3 :
                lay1 ();
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
                lay1();
                lay = 1;
                break;
            case 3 :
                lay2 ();
                lay = 2;
                break;
            }
        }
        else if (77 == input && 1 == lay)
        {
            switch (page)
            {
            case 0 :
                chk = 0;
                for (j = 0; j < size && 0 == chk; j++)
                {
                    system("cls");
                    addemp(&emp[j], &filled);
                    char x = getch();
                    if (75 == (int) x)
                    {
                        chk= 1;
                    }
                    page = 1;
                    break;
                case 1:
                    layout1 ();
                    page = 0;
                }
            }
        }
        else if (77 == input && 2 == lay)
        {
            switch (page)
            {
            case 0:
                if (0 != filled)
                {
                    for (j = 0; j < filled; j++)
                    {
                        display (&emp[j], j);
                    }
                    page = 1;
                }
                break;
            case 1:
                layout2 ();
                page = 0;
            }
        }
        else if (75 == input && 1 == lay)
        {
            switch (page)
            {
            case 0 :
                chk = 0;
                for (j = 0; j < size && 0 == chk; j++)
                {
                    system("cls");
                    addemp(&emp[j], &filled);
                    char x = getch();
                    if (75 == (int) x)
                    {
                        chk = 1;
                    }
                }
                page = 1;
                break;
            case 1:
                layout1 ();
                page = 0;
            }
        }
        else if (75 == input && 2 == lay)
        {
            switch (page)
            {
            case 0:
                if (0! = filled)
                {
                    for (j = 0; j < filled; j++)
                    {
                        display (&emp[j], j);
                    }
                    page = 1;
                }
                break;
            case 1:
                layout2 ();
                page = 0;
            }
        }
        else if (3 == lay && (77 == input || 75 == input))
        {
            exit = 1;
        }
    }
    while (0 == exit);
    return 0;
}
