#include <stdio.h>
int main()
{
  //    *******
  // 1  *** ***
  // 2  **   **
  // 3  *     *
  int r;
  printf("enter number of rows :");
  scanf("%d", &r);

  int nsp = 1;

  for (int i = 1; i <= r * 2 + 1; i++)
  {
    printf("*");
  }
  printf("\n");

  for (int i = r; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    
    for (int k = 1; k <= nsp; k++)
    {
      printf(" ");
    }
    nsp += 2;
    for (int m = 1; m <= i; m++)
    {
      printf("*");
    }
    
    printf("\n");
  }
}