#include <stdio.h>
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = arr;

  printf("%d ", *(p + 4));
  printf("%d ", *p);

  /* int arr[] = {5, 16, 7, 89, 45, 32, 23, 10};
  int *p = &arr[1];
  int *q = &arr[5];
  printf("%d\n", *(p + 3));
  printf("%d\n", *(q - 3));
  printf("%d\n", q - p);
  printf("%d\n", p < q);
  printf("%d\n", *p < *q); */
}