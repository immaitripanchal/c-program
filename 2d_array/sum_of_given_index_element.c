#include <stdio.h>
int main()
{

  int r, c, sum = 0;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  int s1, s2, e1, e2;

  printf("enter starting index for matrix:");
  scanf("%d %d", &s1, &s2);

  printf("enter ending  index for matrix:");
  scanf("%d %d", &e1, &e2);

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {

      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = s1; i <= e1; i++)
  {
    for (int j = s2; j <= e2; j++)
    {
      sum += arr[i][j];
    }
  }

  printf("sum of elements is %d", sum);
}