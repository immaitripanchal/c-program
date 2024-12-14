#include <stdio.h>
int main()
{
  //  *
  //  * *
  //  * * *
  //  * * *
  //  * *
  //  *

  int r;
  printf("enter a number of rows :");
  scanf("%d", &r);

  // ascending order
  for (int i = 1; i <= r; i++)
  {
    // print ascending star
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // descending order
  for (int i = r; i >= 1; i--)
  {
    //  printing descending star
    for (int j = i; j >= 1; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
}