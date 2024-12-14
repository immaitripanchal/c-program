#include <stdio.h>
int fibonacci(int n);
int main()
{
  // taking input
  int n;
  printf("enter any number :");
  scanf("%d", &n);

  // calling function and printing result
  printf("%d fibonacci number is %d", n, fibonacci(n));
}
int fibonacci(int n)
{
  if (n == 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}