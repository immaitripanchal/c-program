#include <stdio.h>
int main()
{
  int i = 1;
  switch (i)
  {
  case 1:
    printf("hello");
    break;
  case 1 * 2 + 4:
    printf("world");
    break;
  }
  return 0;
}