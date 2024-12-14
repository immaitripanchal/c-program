#include <stdio.h>
void main()
{

  int total_triplets = 0;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int x = 10;

  for (int i = 0; i < 10; i++)
  {

    for (int j = i + 1; j < 10; j++)
    {

      for (int k = j + 1; k < 10; k++)
      {
        if (arr[i] + arr[j] + arr[k] == x)
        {
          total_triplets++;
          printf("(%d,%d,%d)", arr[i], arr[j], arr[k]);
        }
      }
    }
  }
  printf("%d", total_triplets);
}