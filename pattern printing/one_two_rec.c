#include <stdio.h>
int main()
{ // i  123456=j
  // 1 121212
  // 2 212121
  // 3 121212
  // 4 212121
  int r;
  printf("enter number of rows :");
  scanf("%d", &r);
  int c;
  printf("enter number of columns :");
  scanf("%d", &c);
  int a;
  for (int i = 1; i <= r; i++)
  {
    if (i % 2 == 0)
    {
      a = 2;
    }
    else
    {
      a = 1;
    }
    for (int j = 1; j <= c; j++)
    {
      printf("%d", a);
      if (a == 1)
      {
        a = 2;
      }
      else
      {
        a = 1;
      }
    }
    printf("\n");
  }
}