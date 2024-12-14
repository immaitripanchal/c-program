#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;
  printf("enter how many elements you want in your array :");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("enter your %d element :", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    bool flag = false;
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = true;
      }
    }
    if (flag == false)
      break;
  }

  printf("sorted array in ascending order is :\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}