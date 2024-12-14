#include <stdio.h>
#include <limits.h>
int main()
{

  int r, c, min=INT_MAX,i1,i2;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      /* printf("enter element at position [%d][%d] :", i, j); */
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (arr[i][j] < min)
      {
        min = arr[i][j];
        i1=1;
        i2=j;
      }

    }
  }

  printf("minimum of all elements is %d\n", min);
  printf("at position [%d][%d]", i1,i2);
}