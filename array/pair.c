#include <stdio.h>
void main()
{

  int total_pairs = 0;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int x = 12;

  for (int i = 0; i < 10; i++)
  {

    for (int j = i + 1; j < 10; j++)
    {

      if (arr[i] + arr[j] == x)
      {
        total_pairs++;
        printf("(%d,%d)\n", arr[i], arr[j]);
      }
    }
  }
  printf(" total pair is %d", total_pairs);
}