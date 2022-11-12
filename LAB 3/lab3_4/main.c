#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int largest(int a, int b, int c)
{
    if(a > b && a > c)
    {
    printf("The largest number is %d", a);
    }
    else if(b > a && b > c)
    {
    printf("The largest number is %d", b);
    }
    else
    printf("The largest number is %d", c);
}
int main()
{
    int a = 0,b = 0,c = 0;
    printf("Please enter 3 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    largest(a,b,c);

    return 0;
}
