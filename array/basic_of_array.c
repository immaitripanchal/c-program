#include <stdio.h>
void main()
{

  int arr[5];
  for (int i = 0; i <= 4; i++)
  {
    printf("enter your %d element:", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("%d", arr[2]);
}
