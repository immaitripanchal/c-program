#include <stdio.h>
int main()
{ //     1234567
  //    1         1
  //    2       2 1 2
  //    3     3 2 1 2 3
  //    4   4 3 2 1 2 3 4
  //    5     3 2 1 2 3 
  //    6       2 1 2
  //    7         1   

  int r;
  printf("enter number of rows :");
  scanf("%d", &r);

  // ascending order
  for (int i = 1; i <= r; i++)
  {
    // printing spaces in the beginning
    int b = i;
    for (int j = 1; j <= r - i; j++)
    {
      printf(" ");
    }
    // print first half values
    for (int k = 1; k <= i; k++)
    {
      printf("%d", b);
      b--;
    }
    // print second half values
    int a = 2;
    for (int e = 1; e <= i - 1; e++)
    {
      printf("%d", a);
      a++;
    }

    printf("\n");
  }

  // print descending order
  for (int i = r-1; i >= 1; i--)
  {
    // printing spaces in the beginning
    int b = i;
    for (int j = r-i; j >= 1; j--)
    {
      printf(" ");
    }
    // print first half values
    for (int k = b; k >= 1; k--)
    {
      printf("%d", b);
      b--;
    }
    // print second half values
    int a = 2;
    for (int e = 1; e <= i - 1; e++)
    {
      printf("%d", a);
      a++;
    }

    printf("\n");
  }
}