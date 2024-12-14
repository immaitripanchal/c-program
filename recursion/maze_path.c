#include <stdio.h>
int maze(int cr, int cc, int er, int ec);
int main()
{
  int r, c;
  printf("enter number of rows of the maze :");
  scanf("%d", &r);

  printf("enter number of columns of the maze :");
  scanf("%d", &c);

  int totalWays = maze(1, 1, r, c);
  printf("the total ways to reach to the location is %d", totalWays);
}
int maze(int cr, int cc, int er, int ec)
{
  int rightWays = 0, downWays = 0;
  if (cr == er && cc == er)
  {
    return 1;
  }
  else if (cc == ec) // only down call
  {
    downWays += maze(cr + 1, cc, er, ec);
  }
  else if (cr == er) // only right call
  {
    rightWays += maze(cr, cc + 1, er, ec);
  }
  else
  {
    downWays += maze(cr + 1, cc, er, ec);
    rightWays += maze(cr, cc + 1, er, ec);
  }

  int totalWays = rightWays + downWays;
  return totalWays;
}
