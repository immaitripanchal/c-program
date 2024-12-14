#include <stdio.h>
int main()
{
  int a = 5;
  int *x = &a;
  int **y = &x;
  *x = 10;
  **y = 20;
  *x = 30;
  printf("%d\n", a);
  printf("%p\n", &a);
  printf("%p\n", x);
  printf("%p\n", &x);
  printf("%p\n", y);
  printf("%p\n", &y);
  printf("%d\n", *x);
  printf("%d\n", **y);
}