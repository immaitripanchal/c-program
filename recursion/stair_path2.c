#include <stdio.h>
int ways(int n);
void main()
{
  int n;
  printf("enter the number of stairs : ");
  scanf("%d", &n);

  printf("Number of ways  if you take 1 , 2 or 3 steps to climb the stairs  : %d\n", ways(n));
}
int ways(int n)
{
  if (n == 3)
  {
    return 4;
  }
  else if (n <= 2)
  {
    return n;
  }

  int ways_to_climb = ways(n - 1) + ways(n - 2) + ways(n - 3);
  return ways_to_climb;
}
