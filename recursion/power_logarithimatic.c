#include <stdio.h>
int power(int a, int b); // define function
int main()
{
  int a, b;

  // talking input
  printf("enter base :");
  scanf("%d", &a);

  printf("enter power :");
  scanf("%d", &b);

  // function call and store result
  int pow;
  pow = power(a, b);

  // print result
  printf("%d to the power %d is %d", a, b, pow);
}

int power(int a, int b) // function definition
{
  if (b == 0)
  {
    return 1;
  }
  int x = power(a, b / 2);
  if (b % 2 == 0)
  {
    return x * x;
  }
  else
  {
    return x * x * a;
  }
}