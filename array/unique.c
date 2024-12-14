#include <stdio.h>
#include <stdbool.h>

int main()
{
  int arr[9] = {4, 3, 2, 1, 6, 3, 2, 1, 5};
  for (int i = 0; i < 9; i++)
  {
    bool flag = false;
    for (int j = 0; j < 9; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        flag = true;
      }
    }
    if (flag == false)
    {
      printf(" the unique element is %d\n ", arr[i]);
      // break;
    }
  }
  return 0;
}