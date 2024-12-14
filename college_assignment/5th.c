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
  int r, r1, c, c1;

  printf("enter number of rows for both matrix :");
  scanf("%d%d", &r, &r1);

  printf("enter number of columns for both matrix :");
  scanf("%d%d", &c, &c1);

  if (c != r1)
  {
    printf("Matrices can't be multiplied\n");
  }
  else
  {
    int arr[r][c];
    int brr[r1][c1];

    printf("enter elements of first matrix :\n");
    input(r, c, arr);

    printf("enter elements of second matrix :\n");
    input(r1, c1, brr);

    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        int sum = 0;
        for (int k = 0; k < c1; k++)
        {
          sum += arr[i][k] * brr[k][j];
        }
        printf("%d ", sum);
      }
      printf("\n");
    }
  }

  return 0;
}