#include <stdio.h>
void sumNDavg(int n, int m)
{
  int sum = n + m;
  float avg = (float)sum / 2;

  printf("sum of %d and %d is %d\n", n, m, sum);
  printf("average of %d and %d is %.2f\n", n, m, avg);
  return;
}
int main()
{
  int n, m;

  puts("enter your first number ");
  scanf("%d", &n);

  puts("enter your second number ");
  scanf("%d", &m);

  sumNDavg(n, m);
}