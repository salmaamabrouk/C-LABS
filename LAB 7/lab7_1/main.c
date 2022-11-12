#include <stdio.h>
#include <stdlib.h>
#include <dir.h>
#include <windows.h>
#include <dos.h>
#define SIZE 1000
#define row 2
////////////////////////////////
//Line editor
///////////////////////////////

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void extended_keys(int *col, int input, int max_col)
{
    if (77 == input && *col < max_col)
    {
        *col ++;
        gotoxy(*col, row);
    }
    else if (75 == input && 0 < *col)
    {
        *col --;
        gotoxy(*col, row);
    }
    else if (71 == input)
    {

        *col = 0;
        gotoxy(*col, row);
    }
    else if (82 == input)
    {
        *col = max_col;
        gotoxy(*col, row);
    }
}

void push(int *col, int *max_col, int str[], int input)
{
    str[*col] = input;
    str[*col + 1] = '\0';
    *col += 1;
    *max_col += 1;
}

void remove_char(int *col, int str[])
{
    if (0 == *col)
    {
        return;
    }

    str[*col] = '\0';
    *col -= 1;


}

void print(int str[])
{
    system("cls");

    int counter = 0;
    while(str[counter] != '\0')
    {
        printf("%c", str[counter]);
        counter++;
    }
}

int main()
{
    int input;
    int col = 0;
    int max_col = 0;
    int str[SIZE];

    do
    {
        input = getch();
        if (224 == input)
        {
            input = getch();
            extended_keys(&col, input, max_col);
            gotoxy(col, row);
        }
        else if(input == 8)
        {
            gotoxy(col, row);
            printf("%c", '\0');
            remove_char( &col, str);
            gotoxy(col, row);
        }
        else
        {
            push( &col, &max_col, str, input);
            gotoxy(col, row);
            printf("%c", input);
        }
    }
    while(13 != input);
    print(str);
    return 0;
}
