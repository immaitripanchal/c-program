#include <stdio.h>
int main()
{ //      123456789
  // 1        *
  // 2       * *
  // 3      *   *
  // 4     *     *
  // 5    *********

  int r;
  printf("enter number of rows :");
  scanf("%d", &r);
  if (r < 3 || r % 2 == 0)
  {
    printf("enter a valid number ");
  }
  int a = 1;
  for (int i = 1; i <= r; i++)
  {
    for (int k = 1; k <= r - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= a; j++)
    {
      if( (j==1 || j==a) || (i==r))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    a += 2;
    printf("\n");
  }
}