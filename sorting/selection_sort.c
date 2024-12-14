#include <stdio.h>
#include <limits.h>
void main()
{
  int n;
  printf("enter how many elements you want in array :");
  scanf("%d", &n);

  int arr[n];

  // taking input
  for (int i = 0; i < n; i++)
  {
    printf("enter your %d element :", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\n");

  // printing the original array
  printf("Original Array : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  // selection sort
  // 5 4 3 2 1
  for (int i = 0; i < n - 1; i++)
  {
    int idx = -1, min = INT_MAX;
    for (int j = i; j <= n - 1; j++)
    {
      if (min > arr[j])
      {
        min = arr[j];
        idx = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[idx];
    arr[idx] = temp;
  }

  printf("\n");
  // printing the sorted
  printf("sorted array : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
