#include <stdio.h>
int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * fact(n - 1);
}
int main()
{
  int n;
  puts("enter a number to get their factorial :");
  scanf("%d", &n);

  int factorial = fact(n);
  printf("factorial is %d", factorial);
}