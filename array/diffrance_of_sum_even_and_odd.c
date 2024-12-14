#include <stdio.h>
int sum(int arr[])
{
  int sum_even = 0, sum_odd = 0;
  for (int i = 0; i < 10; i++)
  {

    if (arr[i] % 2 == 0)
      sum_even += arr[i];
    else
      sum_odd += arr[i];
    printf("%d ", arr[i]);
  }

  printf("\nsum of even number is %d\n", sum_even);
  printf("sum of odd number is %d\n", sum_odd);
  return sum_even - sum_odd;
}
void main()
{

  int arr[10] = {34, 56, 23, 1, 23, 43, 76, 1, 23, 45};

  printf("the difference between sum of even and sum odd is %d", sum(arr));
}