#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Please enter three numbers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c)
    {
        printf("A is the largest number %d \n", a);
    }
    else if(b > a && b > c)
    {
        printf("B is the largest number %d \n", b);
    }
     else if(c > a && c > b)
    {
        printf("C is the largest number %d \n", c);
    }

    return 0;
}
