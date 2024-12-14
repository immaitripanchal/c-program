#include <stdio.h>
int main()
{
  int arr[10];
  // taking input for array
  for (int i = 0; i < 10; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  // printing array and find sum of array
  int sum = 0;
  printf("\nArray elements are: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
    sum += arr[i];
  }
  float avg = sum / 10;
  printf("\nSum of array elements: %d", sum);
  printf("\naverage of array elements : %.3f", avg);

  return 0;
}