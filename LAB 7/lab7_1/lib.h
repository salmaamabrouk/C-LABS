#ifndef LIB
#define LIB
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

#define size 80
#define left 75
#define right 77
#define down 80
#define up 72
#define home 71
#define enter 13
#define en 79
#define back 8


void SetColor(int ForgC);
void textattr(int ForgC);
void clrscr(void);
void gotoxy(int x, int y);
void ext_nav (char *, int *);


#endif // MYLIBRARY
