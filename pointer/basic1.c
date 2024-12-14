#include <stdio.h>
int main()
{
  // int arr[2] = {1, 2};
  // int(*p)[2] = &arr;
  // printf("%d", **p);

  int arr[2][2] = {{1, 2}, {3, 4}};
  int *p = arr;
  /* printf("%p\n", p);
  printf("%d\n", *p);
  printf("%d\n", *p + 1); */
  printf("%d\n", *p + 1);
}