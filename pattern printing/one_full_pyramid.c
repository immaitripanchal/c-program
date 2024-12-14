#include <stdio.h>
int main()
{
  //        1
  //       222
  //      33333
  //     4444444
  //      33333
  //       222
  //        1
  int r, a = 1;
  printf("enter number of rows :");
  scanf("%d", &r);

  // ascending order
  for (int i = 1; i <= r; i++)
  {
    for (int k = 1; k <= r - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= a; j++)
    {
      printf("%d", i);
    }
    a += 2;
    printf("\n");
  }
  a-=2;

  // descending order
  for (int i = r-1; i >=1 ; i--)
  {
    a-=2;
    for (int k = r-i ; k >=1 ; k--)
    {
      printf(" ");
    }
    for (int j = 1; j <= a; j++)
    {
      printf("%d", i);
    }
    
    printf("\n");
  }
}