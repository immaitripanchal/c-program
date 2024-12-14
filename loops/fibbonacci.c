#include <stdio.h>
void main()
{

  int n, first = 0, second = 1, sum;
  printf("enter any number to print fibonacci series=");
  scanf("%d", &n);
  if (n == 1 || n == 0)
  {
    printf("this is not acceptable number please enter a number greater than this");
  }
  else
  {
    printf("  %d  %d ", first, second);
    for (int i = 2; i <= n - 1; i++)
    {

      sum = first + second;
      first = second;
      second = sum;
      printf(" %d ", sum);
    }
  }
}