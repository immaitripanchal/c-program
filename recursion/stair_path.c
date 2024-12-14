#include <stdio.h>
int ways(int n);
void main()
{
  int n;
  printf("enter the number of stairs : ");
  scanf("%d", &n);

  printf("Number of ways  if you take 1 or 2 steps to climb the stairs  : %d\n", ways(n));
}
int ways(int n)
{
  if (n <= 2)
    return n;
  int ways_to_climb = ways(n - 1) + ways(n - 2);
  return ways_to_climb;
}
