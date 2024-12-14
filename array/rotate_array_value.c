#include <stdio.h>
void reverse_array(int arr[], int si, int ei);
void main()
{

  int n, k;
  printf("enter how many elements you want in array:");
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("enter your %d element:", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("enter how many times you want to rotate:");
  scanf("%d", &k);
  k = k % n;
  reverse_array(arr, 0, n - 1);
  reverse_array(arr, 0, k - 1);
  reverse_array(arr, k, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
void reverse_array(int arr[], int si, int ei)
{
  for (int i = si, j = ei; i < j; i++, j--)
  {                 
    int s = arr[i]; 
    arr[i] = arr[j];
    arr[j] = s;
  }
  return;
}