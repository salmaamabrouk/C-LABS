#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////
//Write a C Function that takes one character and checks if it alphabet or not.
/////////////////////////////////////////////////////////////////////////////
int main()
{
    char c;
    printf("Please enter a character \n");
    scanf("%c", &c);
    check(c);
    return 0;
}
void check(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet", c);
    }
    else
        printf("%c is not an alphabet", c);
}
