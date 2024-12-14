#include <stdio.h>
void main()
{
  // i  1 2 3 4=j
  // 1 # # # *
  // 2 # # * *
  // 3 # * * *
  // 4 * * * *

  int r;
  printf("enter number of rows=");
  scanf("%d", &r);
  for (int i = 1; i <= r; i++)
  {

    for (int k = 1; k <= r - i; k++)
    {

      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}