#include <stdio.h>
int main()
{

  int n;

  printf("enter a number of rows/columns :");
  scanf("%d", &n);

  int arr[n][n];

  printf("enter elements of a matrix :");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {

      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n");

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
