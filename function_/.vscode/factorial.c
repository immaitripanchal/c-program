#include <stdio.h>
int factorial(int n);
int main()
{
  int n;
  printf("enter a number :");
  scanf("%d", &n);
  if (n < 0 || n == 0)
  {
    printf("enter a valid number");
  }
  factorial(n);
}
int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
    printf("factorial of %d is  : %d\n", i, fact);
  }
  return 0;
}