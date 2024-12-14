#include <stdio.h>
int main()
{
  int arr[5] = {5, 4, 3, 2, 1};
  int *p, sum = 0;
  for (p = arr; p <= arr + 4; p++)
  {
    sum += *p;
  }
  printf("Sum of elements in the array: %d\n", sum);
}