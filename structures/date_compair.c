#include <stdio.h>
#include <stdbool.h>
int main()
{
  typedef struct date
  {
    int day, month, year;
  } date;
  date arr[2];
  for (int i = 0; i < 2; i++)
  {
    printf("enter day for %d date :", i + 1);
    scanf("%d", &arr[i].day);
    printf("enter month for %d date :", i + 1);
    scanf("%d", &arr[i].month);
    printf("enter year for %d date :", i + 1);
    scanf("%d", &arr[i].year);
  }
  bool flag = false;
  for (int i = 0; i < 2; i++)
  {
    if (arr[i].day == arr[i + 1].day && arr[i].month == arr[i + 1].month && arr[i].year == arr[i + 1].year)
    {
      flag = true;
      break;
    }
  }
  if (flag == true)
    printf("The dates are equal");
  else
    printf("The dates are not equal");
}