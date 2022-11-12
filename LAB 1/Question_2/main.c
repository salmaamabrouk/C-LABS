#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////
//C Program to print ASCII number of a given char
//////////////////////////////////////////////////////////
int main()
{
    char c;
    printf("Please enter a character");
    scanf("%c", &c);
    printf("ASCII code of %c = %d",c,c);
    return 0;
}
