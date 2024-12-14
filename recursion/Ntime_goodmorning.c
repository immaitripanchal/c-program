#include <stdio.h>
void print_greeting(int n);
int main()
{
  int n;
  printf("enter a number ");
  scanf("%d", &n);
  print_greeting(n);
}
void print_greeting(int n)
{
  if (n == 0)
  {
    return;
  }
  printf("Good Morning\n");
  print_greeting(n - 1);
  return;
}