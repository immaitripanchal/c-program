#include <stdio.h>
int main()
{
  int n, num = 0, num1 = 0;
  printf("enter how many elements you want in array :");
  scanf("%d", &n);

  int arr[n];

  // taking input
  for (int i = 0; i < n; i++)
  {
    printf("enter your %d element :", i + 1);
    scanf("%d", &arr[i]);
  }

  // sorting of arrays
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
    }
  }

  // printing sorted array
  printf("sorted array :");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  // making the smallest number of all elements
  for (int i = 0; i < n; i++)
  {
    num = num * 10;
    num = num + arr[i];
  }

  // printing the smallest number
  printf("the smallest number is %d\n", num);

  // making the second smallest number
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] != arr[i - 1])
    {
      int temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      break;
    }
  }
  for (int i = 0; i < n; i++)
  {
    num1 = num1 * 10;
    num1 = num1 + arr[i];
  }

  // printing the second smallest number
  printf("the  second smallest number is %d\n", num1);
  printf("sum is %d\n", num + num1);
}