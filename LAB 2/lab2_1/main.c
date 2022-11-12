#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter a number");
    scanf("%d", &n);
    if(n>0)
    {
        printf("The entered number is positive");
    }
    else if(n==0)
    {
        printf("The entered number is zero");
    }
     else if(n<0)
    {
        printf("The entered number is negative");
    }
    return 0;
}
