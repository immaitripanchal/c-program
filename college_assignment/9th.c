#include <stdio.h>
int fibonacci(int n);
int main()

{
  // taking input
  int n;
  printf("enter any number :");
  scanf("%d", &n);

  for (int i = 1; i < n; i++)
  {
    printf("%d ", fibonacci(i));
  }
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
