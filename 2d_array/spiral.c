#include <stdio.h>
void main()
{
  int r, c;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  // taking input for matrix
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  // initialize the boundaries and counters
  int min_c = 0, max_c = c - 1, min_r = 0, max_r = r - 1, count = 0, total = r * c;

  while (count < total)
  {
    // traverse from left to right
    for (int i = min_c; i <= max_c && count < total; i++)
    {
      printf("%d ", arr[min_r][i]);

      count++;
    }
    min_r++;

    // traverse from top to bottom
    for (int i = min_r; i <= max_r && count < total; i++)
    {
      printf("%d ", arr[i][max_c]);

      count++;
    }
    max_c--;

    // traverse from right to left
    for (int i = max_c; i >= min_c && count < total; i--)
    {
      printf("%d ", arr[max_r][i]);

      count++;
    }
    max_r--;

    // traverse from bottom to top
    for (int i = max_r; i >= min_r && count < total; i--)
    {
      printf("%d ", arr[i][min_c]);

      count++;
    }
    min_c++;
  }
}