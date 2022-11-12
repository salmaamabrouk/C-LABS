#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////
//C Program to make simple calculations (add, sub, multiply, divid) on two integers
///////////////////////////////////////////////////

int main()
{
    int x;
    int y;
    printf("Please enter two numbers \n");
    scanf("%d", &x);
    scanf("%d", &y);
    int add = x + y;
    int sub = x - y;
    int multi = x * y ;
    int div = x / y;
    printf("Addition of x and y =%d \n", add);
    printf("Subtraction of x and y =%d \n", sub);
    printf("Multiplication of x and y =%d \n", multi);
    printf("Division of x and y =%d", div);
}
