#include <stdio.h>
struct hotel
{
  char name[50];
  char address[100];
  int grade;
  int charges;
  int rooms;
};
void printHotelsWithLowCharges(struct hotel arr[], int n, int max);
int main()
{
  struct hotel arr[5];
  int maxCharge, n = 3;

  printf("Enter details for hotels:\n");

  for (int i = 0; i < n; i++)
  {
    printf("Enter Hotel Name :");
    scanf("%s", arr[i].name);
    printf("Enter Address :");
    scanf("%s", arr[i].address);
    printf("Enter Grade :");
    scanf("%d", &arr[i].grade);
    printf("Enter Charges per night :");
    scanf("%d", &arr[i].charges);
    printf("Enter Number of Rooms :");
    scanf("%d", &arr[i].rooms);
  }

  printf("\nEnter the maximum room charges to filter: ");
  scanf("%d", &maxCharge);

  printHotelsWithLowCharges(arr, n, maxCharge);
}
void printHotelsWithLowCharges(struct hotel arr[], int n, int max)
{
  for (int i = 0; i < n; i++)
  {
    if (max >= arr[i].charges)
    {
      printf("\nHotel Name: %s", arr[i].name);
      printf("\nAddress: %s", arr[i].address);
      printf("\nGrade: %d", arr[i].grade);
      printf("\nCharges per night: %d", arr[i].charges);
      printf("\nNumber of Rooms: %d", arr[i].rooms);
    }
  }
}