#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////
//C Program to compute Quotient and Remainder
////////////////////////////////////////////
int main()
{
    int x;
    int y;
    printf("Please enter two numbers \n");
    scanf("%d",&x);
    scanf("%d",&y);
    int quotient = x / y;
    int remainder = x % y;
    printf("Quotient = %d\n", quotient);
    printf("Remainder =  %d", remainder);
    return 0;
}
