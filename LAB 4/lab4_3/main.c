#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////
//C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char key;
    printf("Please enter a key \n");
    key = getche();
    if(key == -32)
    {
        key = getche();
        printf("Extended key: %d \n", key);
    }
    else
    {
     printf("Normal key: %d", key);
    }
    return 0;
}
