#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//C Program to count number of Alphabets & number of words in a sentence. (word count)
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch[100];
    int count = 0;
    int i;

    printf("Please enter a word :\n");
    scanf("%s", &ch);
    for (i = 0; i < strlen (ch); i++)
    {
            count++;
    }
    printf("Number of words in given string are: %d\n", count);
    return 0;
}
