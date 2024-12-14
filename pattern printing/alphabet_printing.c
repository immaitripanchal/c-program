#include <stdio.h>
int main()
{
  int r, mid;
  printf("enter number of rows :");
  scanf("%d", &r);
  if (r < 3 || r % 2 == 0)
  {
    printf("enter a valid number :");
  }
  mid = (r / 2) + 1;
  // i  1234=j
  // 1   **
  // 2  *  *
  // 3  *  *
  // 4  ****
  // 5  *  *
  // 6  *  *
  // 7  *  *

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= mid; j++)
    {
      // left and right side
      if ((i != 1 && (j == 1 || j == mid)) ||
          // top  sides
          (i == 1 && (j > 1 || j < mid)) ||
          // bottom side
          (i == mid && (j > 1 || j < mid)))
      {
        printf("*");
      }
      else
        printf(" ");
    }
    printf("\n");
  }
}