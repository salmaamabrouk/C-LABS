#include "lib.h"


void ext_nav (char *l, int *n)
{
    if(left==*l && (0!=*n))
    {
        (*n)-=2; // return 2 steps from the current location of the cursor to the previous char.
        gotoxy (20+(*n),8);
    }
    else if (right==*l && (size!=*n))
    {
        (*n)++;
        gotoxy (20+(*n),8);
    }
    else if (home==*l)
    {
        (*n)=0;
        gotoxy (20+(*n),8);
    }
    else if (en==*l)
    {
        (*n)=size;
        gotoxy (20+(*n),8);
    }
}

/*
void push (char * l,int * n)
{
    int c;
    for (c=size;c>(*l);c--)
    {
    }
}
void pull (char * l,int * n)
{
}
*/
