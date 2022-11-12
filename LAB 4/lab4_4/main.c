#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////////
//C Program to take firstName and lastName from user, then displays fullName.
//////////////////////////////////////////////////////////////////////////////

int main()
{
    char fn[20];
    char ln[20];
    int i;
    printf("Pleaser enter your first name \n");
    scanf("%s",fn);
    printf("Pleaser enter your last name \n");
    scanf("%s",ln);
    for(i = 0; fn[i] != '\0'; i++);


    for(int j = 0; ln[j] != '\0'; j++)
    {
        i++;
    }
   printf("The full name is: %s %s", fn, ln);
    return 0;
}
