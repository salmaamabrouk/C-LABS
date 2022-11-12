#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////
// C Program to Remove all Characters in a String Except Alphabet
////////////////////////////////////////////////////
int main()
{
    char str[10];
    int i, j;
    printf("Please enter a string \n");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        while(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("The string after Removing all characters except alphabet: ");
    puts(str);
    return 0;
}
