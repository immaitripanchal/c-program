#include <stdio.h>
int main()
{
  int n;
  printf("enter how many elements you want in array :");
  scanf("%d", &n);

  int arr[n];

  // taking input of array
  for (int i = 0; i < n; i++)
  {
    printf("enter %d element :", i + 1);
    scanf("%d", &arr[i]);
  }

  // push zero to end
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] == 0)
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // printing the array
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}