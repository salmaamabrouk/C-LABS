#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////
//int* IncrementArray()
//	- try to return fixed Array first, see what happened.
//	- then rerun dynamically allocated array.
/////////////////////////////////////////////////////

int * IncrementArray (void)
{
    int i = 0;
    int *inc = (int *) malloc(3 * sizeof(int));
    for (i = 0;i < 3; i++)
    {
        printf("Please enter number (%d) : ", i + 1);
        scanf ("%d", &inc[i]);
    }
    return inc;
}

int main()
{
    int *heap;
    int i = 0;
    heap = IncrementArray();
    printf("VALUES : ");
    for (i = 0; i < 3; i++)
    {
        printf (" %d ",heap[i]);
    }
    return 0;
}
