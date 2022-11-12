#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////
//C Program to Find the Length of a String without Using strlen()
/////////////////////////////////////////////////////////////////
int main()
{
    char str[20];
    int i, length = 0;
    printf("Please enter a string \n");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of string is : %d", length);
    return 0;
}
