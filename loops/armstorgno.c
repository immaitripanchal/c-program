#include <stdio.h>
void main()
{
  int c, n, r, sum = 0, n1;

  printf("enter any number to check if it is armstrong or not=");
  scanf("%d", &n);
  n1 = n;

  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    c = r * r * r;
    sum = sum + c;
  }
  if (n1 == sum)
    printf("the given number is armstrong");
  else
    printf("the given number is not armstrong");
}