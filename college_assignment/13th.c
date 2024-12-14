#include <stdio.h>
int main()
{
  int n;
  printf("enter a number ");
  scanf("%d", &n);

  int arr[n];
  int *p = arr;
  for (p = &arr[0]; p < &arr[n]; p++)
  {
    scanf("%d", p);
  }

  for (p = &arr[0]; p < &arr[n]; p++)
  {
    printf("%d ", *p);
  }
}