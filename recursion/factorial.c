#include <stdio.h>
int factorial(int n);
int main()
{
  int n, fact;
  printf("enter a number :");
  scanf("%d", &n);
  // function call
  fact = factorial(n);
  printf("the answer is %d ", fact);
}

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  int recAns = n * factorial(n - 1);
  return recAns;
}