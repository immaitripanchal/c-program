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

  // taking input

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n");

  // store the transpose array

  for (int i = 0; i < c; i++)
  {

    for (int j = 0; j < r; j++)
    {
      brr[i][j] = arr[j][i];
    }
  }

  // rotate the transpose array by 90 degrees
  for (int i = 0; i < c; i++)
  {
    for (int j = 0, k = r - 1; j < k; j++, k--)
    {
      int temp = brr[i][j];
      brr[i][j] = brr[i][k];
      brr[i][k] = temp;
    }
  }

  // print the array

  for (int i = 0; i < c; i++)
  {

    for (int j = 0; j < r; j++)
    {
      printf("%d ", brr[i][j]);
    }
    printf("\n");
  }
}
