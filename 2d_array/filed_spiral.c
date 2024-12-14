#include <stdio.h>
void main()
{
  int n;

  printf("enter a number of rows and columns:");
  scanf("%d", &n);

  int arr[n][n];

  // initialize the boundaries and counters
  int min_c = 0, max_c = n - 1, min_r = 0, max_r = n - 1, count = 0, total = n * n;

  while (count < total)
  {
    // traverse from left to right
    for (int i = min_c; i <= max_c && count < total; i++)
    {
      count++;
      arr[min_r][i]=count;
    }
    min_r++;

    // traverse from top to bottom
    for (int i = min_r; i <= max_r && count < total; i++)
    {
      count++;
      arr[i][max_c]=count;
    }
    max_c--;

    // traverse from right to left
    for (int i = max_c; i >= min_c && count < total; i--)
    {
      count++;
      arr[max_r][i]=count;
    }
    max_r--;

    // traverse from bottom to top
    for (int i = max_r; i >= min_r && count < total; i--)
    {
      count++;
     arr[i][min_c]=count;
    }
    min_c++;
  }
  // printing matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}