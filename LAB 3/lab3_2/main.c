#include <stdio.h>
#include <stdlib.h>
/////////////////////////////
//Simple Menu with 3 choices.
/////////////////////////////

int main()
{
    int choice;

    printf("Menu: \n 1. Good Morning \n 2. Good Evening \n 3. Goodbye \n");
    scanf("%d", &choice);


    if(choice == 1)
    {
        system("cls");
        printf("Good Morning \n");
    }
     else if(choice == 2)
    {
        system("cls");
        printf("Good Evening \n");

    }
      else if(choice == 3)
    {
        system("cls");
        printf("Goodbye \n");
    }
    else
    {
        system("cls");

    }

    return 0;
}
