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
    scanf("%d", &arr[i]);
  }

  int k;
  printf("which element you want to search :");
  scanf("%d", &k);
  bool flag = false;
  int idx = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      flag = true;
      idx = i;
      break;
    }
  }
  if (flag == true)
    printf("element you want to search is found at index %d\n:", idx);
  else
    printf("element you want to search is not found\n");

  return 0;
}