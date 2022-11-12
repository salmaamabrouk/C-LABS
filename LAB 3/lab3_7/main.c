#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//Write a C Function that prints the cube of any number.
//////////////////////////////////////////////////////

double cube(double num);

int main()
{
    int num;
    double c;

    printf("Please enter a number \n");
    scanf("%d", &num);
    c = cube(num);
    printf("Cube of %d is %f", num, c);
    return 0;
}

double cube(double num)
{
    double c = num * num * num;
    return c;
}

