#include <stdio.h>
void preINpost(int n);
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  preINpost(n);
}
void preINpost(int n)
{
  if (n == 0)
    return;
  printf("pre %d\n", n);
  preINpost(n - 1);
  printf("in %d\n", n);
  preINpost(n - 1);
  printf("post %d\n", n);
  return;
}