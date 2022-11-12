#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////
//Receive numbers from the user, and exit when the sum exceeds 100.
///////////////////////////////////////////////////////////////

int main()
{
    int n;
    int sum = 0;
    printf("Please enter an number \n");

    do
    {
        scanf("%d", &n);
        sum = sum + n;
    }

    while (sum < 100);

    printf("The sum is = %d \n", sum);
    return 0;
}
