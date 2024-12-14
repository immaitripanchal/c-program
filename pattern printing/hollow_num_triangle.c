#include <stdio.h>
int main()
{
  //         1
  //        2 2
  //       3   3
  //      4444444

  int r, a = 1;
  printf("enter number of rows :");
  scanf("%d", &r);

  for (int i = 1; i <= r; i++)
  {
    for (int k = 1; k <= r - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= a; j++)
    {
      if ((j == 1 || j == a) || (i == r))
      {
        printf("%d", i);
      }
      else
      {
        printf(" ");
      }
    }
    a += 2;
    printf("\n");
  }
}