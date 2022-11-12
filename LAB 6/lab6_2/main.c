#include <stdio.h>
#include <stdlib.h>
/////////////////////////////
//Recursive: Power.
/////////////////////////////
int multi (int,int);

int main()
{
    int x;
    int y;
    int result;
    printf ("Please enter a number\n");
    scanf ("%d", &x);
    printf ("Enter the power value\n");
    scanf ("%d", &y);
    result = multi (x, y);
    printf ("Result = %d\n", result);
    return 0;
}



int multi (int n, int power)
{
    int re;
    if (power > 0)
    {
        return  n * multi (n, power - 1);
    }
    else
    {
        return 1;
    }
}
