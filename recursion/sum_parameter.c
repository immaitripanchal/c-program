#include <stdio.h>
int sum(int n, int s);
int main()
{
  int n;
  printf("enter a number :");
  scanf("%d", &n);
  sum(n, 0);
  return 0;
}
int sum(int n, int s)
{
  if (n == 0)
  {
    printf("sum is %d", s);
    return 0;
  }
  sum(n - 1, s + n);
  return 0;
}