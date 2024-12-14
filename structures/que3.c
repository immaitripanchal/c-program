#include <stdio.h>
void printMonth(int month, int day);
struct month
{
  int day;
  int month;
};
int main()
{
  struct month s1, s2;

  printf("Enter first date (mm dd) :");
  scanf("%d %d", &s1.month, &s1.day);

  printf("Enter second date (mm dd) :");
  scanf("%d %d", &s2.month, &s2.day);

  printf("Month of first date :");
  printMonth(s1.month, s1.day);
  printf("\n");
  printf("\nMonth of second date :");
  printMonth(s2.month, s2.day);
}
void printMonth(int month, int day)
{
  switch (month)
  {
  case 1:
    printf("january %d", day);
    break;
  case 2:
    printf("february %d", day);
    break;
  case 3:
    printf("march %d", day);
    break;
  case 4:
    printf("april %d", day);
    break;
  case 5:
    printf("may %d", day);
    break;
  case 6:
    printf("june %d", day);
    break;
  case 7:
    printf("july %d", day);
    break;
  case 8:
    printf("august %d", day);
    break;
  case 9:
    printf("september %d", day);
    break;
  case 10:
    printf("october %d", day);
    break;
  case 11:
    printf("november %d", day);
    break;
  case 12:
    printf("december %d", day);
    break;
  default:
    printf("Invalid month");
  }
}