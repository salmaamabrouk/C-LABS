#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter a number");
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        printf("The entered number is even");
    }
    else if(n % 2 != 0)
    {
        printf("The entered number is odd");
    }
    return 0;
}
