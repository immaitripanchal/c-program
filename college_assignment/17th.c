#include <stdio.h>
int main()
{
  int arr[5] = {5, 4, 3, 2, 1};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4 - i; j++)
    {
      int *ptr = &arr[j];
      int *ptr1 = &arr[j + 1];
      if (*ptr > *ptr1)
      {
        int temp = *ptr;
        *ptr = *ptr1;
        *ptr1 = temp;
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
}