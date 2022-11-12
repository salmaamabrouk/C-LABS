#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////
//Write C Function that converts the any letter from lowercase to uppercase.
//////////////////////////////////////////////////////////////////////////
int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    convert(ch);
    return 0;
}

void convert(char ch)
{
    printf("%c in uppercase is represented as  %c",ch, toupper(ch));
}
