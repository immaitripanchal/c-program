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

  // insertion sort
  // 5 4 3 2 1
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
    }
  }

  printf("\n");
  // printing the sorted
  printf("sorted array : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
