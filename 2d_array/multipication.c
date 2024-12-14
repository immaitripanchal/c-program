#include <stdio.h>
int taking_input(int r, int c, int arr[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  return 0;
}
int main()
{
  int r, r1, c, c1;

  printf("enter a number of rows for both matrix :");
  scanf("%d%d", &r, &r1);

  printf("enter a number of columns for both matrix :");
  scanf("%d%d", &c, &c1);

  // check
  if (c != r1)
  {
    printf("Matrices can't be multiplied\n");
  }
  else
  {
    int arr[r][c];
    int brr[r1][c1];

    // taking input for both matrix by the use of function
    printf("enter elements of first matrix :\n");
    taking_input(r, c, arr);

    printf("enter elements of second matrix :\n");
    taking_input(r1, c1, brr);

    // creat a resultant matrix
    int crr[r][c1];
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        crr[i][j] = 0;
        for (int k = 0; k < r1; k++)
        {
          crr[i][j] += arr[i][k] * brr[k][j];
        }
        // print resultant matrix
        printf("%d ", crr[i][j]);
      }
      printf("\n");
    }
  }
}