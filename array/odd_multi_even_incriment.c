#include <stdio.h>
void main()
{

  int n;
  printf("enter how many elements do you want in array:");
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("enter %d element:", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++)
  {

    if (i % 2 == 0)
      arr[i] += 10;
    else
      arr[i] *= 2;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}