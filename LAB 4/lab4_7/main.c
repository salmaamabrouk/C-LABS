#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////
// C Program to Copy String Without Using strcpy()
/////////////////////////////////////////////////////////////////

int main()
{
   char str[10], str_copy[10], i;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; ++i) {
        str_copy[i] = str[i];
    }

    str_copy[i] = '\0';
    printf("The copied string is %s", str_copy);

    return 0;
}
