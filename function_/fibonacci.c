#include <stdio.h>
int fibonacci(int n);
int main()
{

  int n;
  printf("enter any number :");
  scanf("%d", &n);
  if (n < 0 || n == 0)
  {
    printf("please enter a valid number");
  }
  else{
     fibonacci(n);
  }
  
}
int fibonacci(int n)
{
  int first = 0, second = 1, sum;
  if (n == 1)
  {
    printf("%d", first);
  }
  else
  {
    printf("%d %d ", first, second);
    for (int i = 2; i <= n - 1; i++)
    {
      sum = first + second;
      first = second;
      second = sum;
      printf("%d ", sum);
    }
    // 0 1 1 2 3 5
  }
}
