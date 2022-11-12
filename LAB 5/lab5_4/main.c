#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<windows.h>
#include <time.h>
#include "emp_menu.h"
#define size 100
//////////////////////////////////////////////////////////
//Employee with functions and Highlight Menu: Menu of Array_Of_Struct
/////////////////////////////////////////////////////////

int main()
{
    char input;
    char opt1;
    char arro [2];
    int chk;
    int optclr = 100;
    int lay;
    int exit=0;
    int filled=0;
    int page=0;
    int j=0;
    int limit = size;
    Emp_Struct emp [size] = {0,0,0,0,0,'0'};

    layout1 ();
    lay=1;
    page=0;

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
        else if ((77 == input && 1 == lay) && 1 == lay)
        {
            switch (page)
            {
            case 0 :
                chk = 0;
                for(j = 0; j < size && 0 == chk; j++)
                {
                    system("cls");
                    addemp(&emp[j], &filled);
                    printf ("Press Right or Left arrow to return or any other key to continue\n");
                    fflush (stdin);
                    fflush (stdin);

                    if (77 == getchar() || 75 == getchar())
                    {
                        printf("%d\n", arro);
                        chk = 1;
                    }
                    page = 1;
                    break;
                case 1:
                    layout1 ();
                    page = 0;
                }
            }
        }
    }

        else if ((77 == input && 2 == lay)
        {
            switch (page)
            {
            case 0 :
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
                chk =0;
                for (j=0; j<size && 0==chk; j++)
                {
                    system("cls");
                    addemp(&emp[j],&filled);
                    printf ("Press Right OR Left arrow to return or any other key to continue\n");
                    fflush (stdin);
                    /*arro[0]=getch();
                    arro[1]=getch();*/
                    if (77==getchar() || 75==getchar())
                    {
                        printf("%d\n",arro);
                        chk=1;
                    }
                }
                page=1;
                break;
            case 1:
                layout1 ();
                page=0;
            }
        }
        else if (75==inp && 2==lay) // Left arrow to switch pages at a certain layout.
        {
            switch (page)
            {
            case 0 :
                if (0!=filled)
                {
                    for (j=0; j<filled; j++)
                    {
                        display (&emp[j],j);
                    }
                    page =1;
                }
                break;
            case 1:
                layout2 ();
                page=0;
            }
        }
        else if (3==lay && (77==inp || 75==inp)) // Right or Left arrows to exit.
        {
            exit=1;
        }

    while (0==exit);
    return 0;
}
