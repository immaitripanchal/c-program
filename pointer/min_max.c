#include <stdio.h>
int minmax(int arr[], int *min, int *max, int n);
int main()
{

  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];

  minmax(arr, &min, &max, n);

  printf("minimum number is %d\n ", min);
  printf("maximum number is %d \n", max);
}

int minmax(int arr[], int *min, int *max, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < *min)
    {
      *min = arr[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > *max)
    {
      *max = arr[i];
    }
  }
  return 0;
}