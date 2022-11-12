#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    char choice=0;
    printf("Please choose an operation to perform \n +.Addition \n -.Subtraction \n *.Multiplication \n /.Division\n");
    choice=getche();
    printf("Please enter the first number \n");
    scanf("%d", &a);
    printf("Please enter the second number \n");
    scanf("%d", &b);
    // printf("Please choose an operation to perform \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
    // choice=getchar();
    switch(choice)
    {
    case '+' :
        printf("\n Addition of %d and %d = %d \n", a, b, a + b);
        break;

    case '-' :
        printf("\n Subtraction of %d and %d = %d \n", a, b, a - b);
        break;

    case '*' :
        printf("\n Multiplication of %d and %d = %d \n", a, b, a * b);
        break;

    case '/' :
        printf("\n Division of %d and %d = %d \n", a, b, a / b);
        break;

    case 5 :
        return 0;
        break;

    default :
    printf("Invalid operation \n");
    break;
    }


    return 0;
}
