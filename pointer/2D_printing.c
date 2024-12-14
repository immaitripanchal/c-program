#include <stdio.h>
int main()
{
  int arr[2][2] = {{1, 2}, {3, 4}};
  int *p;
  int r = 2, c = 2;
  for (p = &arr[0][0]; p <= &arr[2 - 1][2 - 1]; p++)
  {
    printf("%d ", *p);
  }
}