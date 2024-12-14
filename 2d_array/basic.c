#include <stdio.h>
int main()
{
  int r;
  printf("enter a number of rows :");
  scanf("%d", &r);

  int c;
  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("Enter element at position [%d][%d] :", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}