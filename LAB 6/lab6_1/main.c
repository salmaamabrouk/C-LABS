#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////
//Input and Output from Array using pointers:
  //C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
 //(try to use "Array Notation while reading data" and "Pointer notation while printing data")
 /////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[5], i;

     printf("Please enter 5 elements in the array \n");
     for(i = 0; i < 5; i++)
     {
        scanf("%d", &arr + i);
     }
     printf("Elements of the array are: ");
     for(i = 0; i < 5; i++)
     {
         printf("%d    ", *(arr + i));
     }
    return 0;
}
