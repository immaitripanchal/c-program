#include <stdio.h>
void main()
{

  int marks[10];
  for (int i = 0; i <= 9; i++)
  {

    printf("enter your %d marks:", i + 1);
    scanf("%d", &marks[i]);
  }
  for (int i = 0; i <= 9; i++)
  {
    if (marks[i] < 35)
    {
      printf("%d ", i);
    }
  }
}
