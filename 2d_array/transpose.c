#include <stdio.h>
int main()
{

  int r, c;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];
  int brr[c][r];

  printf("enter elements of a matrix :");

  // input

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n");

  // transpose
  for (int i = 0; i < c; i++)
  {

    for (int j = 0; j < r; j++)
    {
      brr[i][j] = arr[j][i];
    }
  }

  // print array

  for (int i = 0; i < c; i++)
  {

    for (int j = 0; j < r; j++)
    {
      printf("%d ", brr[i][j]);
    }
    printf("\n");
  }
}
