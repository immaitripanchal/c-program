#include <stdio.h>
#include <stdbool.h>
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

  printf("\n");

  // bubble sort
  for (int i = 0; i < n - 1; i++)
  {
    bool flag = true;
    for (int j = 0; j <= n - 2 - i; j++)
    {
      // 5 4 3 2 1
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = false;
      }
    }
    if (flag == true)
      break;
  }
  //  printing shorted array
  printf("sorted array : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}