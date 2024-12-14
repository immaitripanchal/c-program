#include <stdio.h>
void swap(int *x, int *y);

int main()
{
  int a = 5;
  int b = 7;
  swap(&a, &b);
  printf("the value of a is %d\n", a);
  printf("the value of b is %d", b);
}
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
  return;
}