#include <stdio.h>
int factor(int n);
int checkprime(int n);
int main()
{
  int n;
  printf("enter a number :");
  scanf("%d", &n);
  if (n == 0)
  {
    printf("please enter a vaild number :");
  }
  factor(n);
}
int factor(int n)
{
  printf("the  prime factors of %d  are :", n);

  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      checkprime(i);
    }
  }
  return 0;
}
int checkprime(int n)
{
  int a = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      a = 0;
      break;
    }
  }
  if (a == 1)
    printf("%d ", n);

  return 0;
}