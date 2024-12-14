#include <stdio.h>
void main()
{
  printf("<-----MENU------->\n");
  printf("1.addition\n");
  printf("2.subtraction\n");
  printf("3.multiplication\n");
  printf("4.division\n");
  printf("5.exit\n");
  printf("<----------------->\n");

  int choice;

  printf("enter your choice :");
  scanf("%d", &choice);

  switch (choice)
  {
  case 5:
    printf("thanks for using the calculator");
    break;

  case 1:
  case 2:
  case 3:
  case 4:
  {
    int n;
    printf("\nhow many input do you want to enter :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      printf("enter your %d number :", i + 1);
      scanf("%d", &arr[i]);
    }
    switch (choice)
    {
    case 1:
    {
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
        sum = sum + arr[i];
      }
      printf("the addition of given number is %d", sum);
    }
    break;
    case 2:
    {
      int sum = arr[0];
      for (int i = 1; i < n; i++)
      {
        sum = sum - arr[i];
      }
      printf("the subtraction of given number is %d", sum);
    }
    break;
    case 3:
    {
      int sum = 1;
      for (int i = 0; i < n; i++)
      {
        sum = sum * arr[i];
      }
      printf("the multiplication of given number is %d", sum);
    }
    break;
    case 4:
    {
      int sum = arr[0];
      for (int i = 1; i < n; i++)
      {
        sum = sum / arr[i];
      }
      printf("the division of given number is %d", sum);
    }
    break;
    }
  }
  break;

  default:
    printf("\nplease enter valid choice :");
    break;
  }
}