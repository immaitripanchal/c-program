#include <stdio.h>
int main()
{
  //    1234321
  // 1  123 321
  // 2  12   21
  // 3  1     1
  int r;
  printf("enter number of rows :");
  scanf("%d", &r);

  int nsp = 1;
  int c = r;

  // Printing the top half of the pattern
  for (int i = 1; i <= r * 2 + 1; i++)
  {
    if (i <= (r + 1))
    {
      printf("%d", i);
    }
    else
    {

      printf("%d", c);
      c--;
    }
  }
  printf("\n");

  // Printing the bottom half of the pattern
  for (int i = r; i >= 1; i--)
  {
    int a = 1;
    int b = i;

    //  printing left side of pattern
    for (int j = 1; j <= i; j++)
    {
      printf("%d", a);
      a++;
    }
    // printing spaces after pattern
    for (int k = 1; k <= nsp; k++)
    {
      printf(" ");
    }
    nsp += 2;

    //  printing right side of pattern
    for (int m = 1; m <= i; m++)
    {
      printf("%d", b);
      b--;
    }

    printf("\n");
  }
}