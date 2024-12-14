#include <stdio.h>
struct state
{
  char name[50];
  int engineeringCollege;
  int medicalCollege;
  int managementCollege;
  int university;
  int totalCollege;
};
void printStateHavingHighestCollege(struct state arr[], int n);
int main()
{
  int n;
  printf("Enter the number of states: ");
  scanf("%d", &n);

  struct state arr[n];

  printf("Enter details of the state :\n");
  for (int i = 0; i < n; i++)
  {
    printf("Enter state name :");

    scanf("%s", arr[i].name);

    printf("Enter number of engineering colleges :");
    scanf("%d", &arr[i].engineeringCollege);

    printf("Enter number of medical colleges :");
    scanf("%d", &arr[i].medicalCollege);

    printf("Enter number of management college :");
    scanf("%d", &arr[i].managementCollege);

    printf("Enter number of university :");
    scanf("%d", &arr[i].university);

    arr[i].totalCollege = arr[i].engineeringCollege + arr[i].medicalCollege + arr[i].managementCollege + arr[i].university;
  }
  printStateHavingHighestCollege(arr, n);
}
void printStateHavingHighestCollege(struct state arr[], int n)
{
  int max = arr[0].totalCollege;
  int idx = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i].totalCollege > max)
    {
      max = arr[i].totalCollege;
      idx = i;
    }
  }
  printf("\nState with highest number of colleges is %s with %d colleges.\n", arr[idx].name, arr[idx].totalCollege);
}