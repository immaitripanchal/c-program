#include <stdio.h>
int main()
{
  int arr[10] = {0, 1, 2, 3, 4, 5, 3, 6, 7, 8};
  for (int i = 0; i < 10; i++)
  {
    for (int j = i+1; j < 10; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("Duplicate found: %d\n", arr[i]);
        break; // break the loop once duplicate is found
      }
    }
  }
}
