#include <stdio.h>
void input(int r, int c, int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
int main()
{
  int r, c;

  printf("enter number of rows for both matrix :");
  scanf("%d", &r);

  printf("enter number of columns for both matrix :");
  scanf("%d", &c);

  int arr[r][c];
  int brr[r][c];

  printf("enter first matrix element\n ");
  input(r, c, arr);

  printf("enter second matrix element\n ");
  input(r, c, brr);

  printf("Addition of two matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j] + brr[i][j]);
    }
    printf("\n");
  }

  return 0;
}