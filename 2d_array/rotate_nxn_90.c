#include <stdio.h>
int main()
{

  int n;
  printf("enter number of rows/columns :\n");
  scanf("%d", &n);

  int arr[n][n];

  printf("enter matrix elements :\n");

  // input of array

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  // transpose array

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  // reverse the row

  for (int i = 0; i < n; i++)
  {
    for (int j = 0, k = n - 1; j < k; j++, k--)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[i][k];
      arr[i][k] = temp;
    }
  }

   printf("\n");

  // print rotate array

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}