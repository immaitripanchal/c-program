#include <stdio.h>
void array(int r, int c, int a[r][c]);
int main()
{
  int r;
  printf("enter a number of rows :");
  scanf("%d", &r);

  int c;
  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];
  int brr[r][c];

  printf("enter first matrix element\n ");
  array(r, c, arr);

  printf("enter second matrix element\n ");
  array(r, c, brr);

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      printf("%d ", arr[i][j] + brr[i][j]);
    }
    printf("\n");
  }
}
void array(int r, int c, int a[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      /* printf("enter element at position [%d][%d] :", i, j); */
      scanf("%d", &a[i][j]);
    }
  }

  return;
}