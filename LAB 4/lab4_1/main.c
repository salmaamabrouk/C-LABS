#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////////////
//C Program to swap 2 integer values. (Swap function, calling by address)
////////////////////////////////////////////////////////////////////
int main()
{
    int p, q;
    printf("Please enter two numbers \n");
    scanf("%d", &p);
    scanf("%d", &q);
    printf("Before swapping: p = %d, q = %d \n", p, q);
    swap(&p, &q);
    printf("After swapping: p = %d, q = %d \n", p, q);

    return 0;
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
