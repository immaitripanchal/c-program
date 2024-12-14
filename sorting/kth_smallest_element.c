#include <stdio.h>
#include <limits.h>
int main()
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

  int k;
  printf("enter value of k :");
  scanf("%d", &k);

  // selection sort
  for (int i = 0; i < k - 1; i++)
  {
    int min = INT_MAX, idx = -1;
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

  // printing kth  smallest element
  printf("%d smallest element is %d", k, arr[k - 1]);
  printf("\n");
}