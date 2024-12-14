#include <stdio.h>
#include <limits.h>
int main()
{

  int r, c, max = INT_MIN, row;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  printf("enter elements of a matrix :");

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < r; i++)
  {
    int sum = 0;
    for (int j = 0; j < c; j++)
    {
      sum += arr[i][j];
    }
    if (sum > max)
    {
      max = sum;
      row = i + 1;
    }
  }

  printf("maximum sum is %d of row no %d", max, row);
}
