#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////
//C Program to Find the Frequency of Characters in a String
///////////////////////////////////////////////////////////

int main()
{
    char str[10], ch;
    int count = 0, i;
    printf("Please enter a string\n");
    gets(str);
    printf("Please enter a character to find its frequency \n");
    scanf("%c", &ch);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(ch == str[i])
            count ++;
    }
    printf("Frequency of %c = %d \n", ch, count);
    printf("%c occurs %d times in %s", ch, count, str);
    getch();
    return 0;
}
