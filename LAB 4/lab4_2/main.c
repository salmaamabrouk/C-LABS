#include <stdio.h>
#include <stdlib.h>
#define enter 13
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Receive character by character and then place the string terminator upon pressing enter, then display the string.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main()
{
    char str[100];
    int i = 0;
    int flag = 1;
    printf("Please enter a character \n");
    do
    {
        str[i] = getche();
        if(str[i] == enter)
        {
            flag = 0;
            str[i] = '\0';
        }
        else
        {
            i++;
        }
    }
    while(flag == 1);
    printf("%s", str);
}
