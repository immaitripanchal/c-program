#include <stdio.h>
int maze(int r, int c);
int main()
{
  int r, c;
  printf("enter number of rows of the maze :");
  scanf("%d", &r);

  printf("enter number of columns of the maze :");
  scanf("%d", &c);

  int totalWays = maze(r, c);
  printf("the total ways to reach to the location is %d", totalWays);
}
int maze(int r, int c)
{
  int rightWays = 0, downWays = 0;
  if (r == 1 && c == 1)
  {
    return 1;
  }
  else if (r == 1) // only right calls
  {
    rightWays += maze(r, c - 1);
  }
  else if (c == 1) // only down calls
  {
    downWays += maze(r - 1, c);
  }
  else
  {
    rightWays += maze(r, c - 1);
    downWays += maze(r - 1, c);
  }
  int totalWays = rightWays + downWays;
  return totalWays;
}
