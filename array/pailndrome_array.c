#include <stdio.h>
void main()
{

  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("enter your %d element:", i + 1);
    scanf("%d", &arr[i]);
  }

  int i = 0, j = 4, a;
  while (i < j)
  {

    if (arr[i] == arr[j])
    {

      i++;
      j--;
      a = 1;
    }
    else
    {

      printf("array is not palindrome");
      break;
    }
  }

  if (a == 1)
  {
    printf("array is palindrome");
  }
}