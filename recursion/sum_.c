#include <stdio.h>
int sum(int n);
int main()
{
  int n;
  printf("enter any number :");
  scanf("%d", &n);
  int s = sum(n);
  printf("sum is %d", s);
}
int sum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  int resAns = n + sum(n - 1);
  return resAns;
}