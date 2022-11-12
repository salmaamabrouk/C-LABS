#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <windows.h>

typedef struct node
{
    struct node *next;
    char value;
    int col_position;
    int row_pos;
} Node;

typedef struct col_size
{
    int row_num;
    int size;
    struct col_size *next;
} col_size;

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void extended_keys(int input, int *col, int *row, int max_col, int max_row, Node *head)
{
    Node *current = head->next;
    Node *prev = NULL;
    if (77 == input)
    {
        while (current->next != NULL && current->row_pos <= *row)
        {
            prev = current;
            current = current->next;
        }
        if (*row == max_row)
        {
            prev = current;
        }
    }

    if (72 == input && 0 < *row)
    {
        *row -= 1;
        Node *current = head->next;
        Node *prev = NULL;
        while (current->next != NULL && current->row_pos <= *row)
        {
            prev = current;
            current = current->next;
        }
        *col = prev->col_position;
        gotoxy(*col, *row);
    }
    else if (80 == input && *row < max_row)
    {
        *row += 1;
        Node *current = head->next;

        while (current->next != NULL && current->row_pos <= *row)
        {

            current = current->next;
        }
        *col = current->col_position;
        gotoxy(*col, *row);
    }
    else if (77 == input && *col < prev->col_position)
    {
        *col += 1;
        gotoxy(*col, *row);
    }
    else if (75 == input && 0 < *col)
    {
        *col -= 1;
        gotoxy(*col, *row);
    }
    else if (71 == input)
    {
        *col = 0;
        *row = 0;
        gotoxy(*col, *row);
    }
    else if (82 == input)
    {
        *col = max_col;
        *row = max_row;
        gotoxy(*col, *row);
    }
}

void push(Node *head, int value, int *max_col, int *max_row, int *col, int *row, int *total_col_at_max)
{

        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        if (13 == value)
        {
            current->next = (Node *)malloc(sizeof(Node));
            current->next->value = '\n';
            *max_row += 1;
            *row += 1;
            current->next->row_pos = *max_row;
            *col = 0;
            current->next->col_position = *col;
            current->next->next = NULL;
            if (current->col_position == *max_col && 0 != *row)
            {
                *total_col_at_max += 1;
            }
            else if (current->col_position > *max_col)
            {
                *total_col_at_max = 0;
            }
        }
        else
        {
            current->next = (Node *)malloc(sizeof(Node));
            current->next->value = value;
            current->next->row_pos = *max_row;
            *col += 1;
            current->next->col_position = *col;
            current->next->next = NULL;
        }
        *max_col = *col > *max_col ? *col : *max_col;
        gotoxy(*col, *row);

}

void remove_node(int *col, int *row, int *max_col, int *max_row, Node *head)
{
    if (0 == *row && 0 == *col)
    {
        return;
    }
    Node *end = head;
    Node *prev = NULL;
    Node *prev_prev = prev;
    while (end->next != NULL)
    {
        prev_prev = prev;
        prev = end;
        end = end->next;
    }

    prev->next = NULL;

    free(end);
    *max_col = *max_col == *col ? *col - 1 : *max_col;
    if (prev->value == '\n')
    {
        prev_prev->next = NULL;
        free(prev);
        *row -= 1;
        *max_row -= 1;
        *col = prev_prev->col_position;
    }
    else
    {

        *col -= 1;
    }
    gotoxy(*col, *row);
}
int main()
{
    int input;
    int col = 0;
    int row = 0;
    int max_col = 0;
    int total_col_at_max = 0;
    int max_row = 0;

    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;

    do
    {
        input = getch();
        if (224 == input)
        {
            input = getch();
            extended_keys(input, &col, &row, max_col, max_row, head);
        }
        else
        {
            if (8 == input && 0 <= col)
            {
                remove_node(&col, &row, &max_col, &max_row, head);
                print_char(head);
            }
            else
            {
                push(head, input, &max_col, &max_row, &col, &row, &total_col_at_max);
                print_char(head);
            }
        }
        gotoxy(1, 25);
        printf("col: %d row: %d\n", col, row);
        gotoxy(col, row);
    } while (27 != input);

    print_char(head);
    return 0;
}

void print_char(Node *head)
{
    Node *current = head;
    system("cls");
    while (current->next != NULL)
    {
        current = current->next;
        printf("%c", current->value);
    }
}
