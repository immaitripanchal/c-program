#include <stdio.h>
// int x = 40;
// int main()
// {
//   int x = 20;
//   printf("%d\n", x);
// }
int main()
{
  int x = 40;
  {
    int x = 20;
    printf("%d\n", x);
  }
  printf("%d\n", x);
}