#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////
//C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
///////////////////////////////////////////////////////////////

int main()
{
     int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }
      return 0;
}
