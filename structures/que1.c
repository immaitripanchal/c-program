#include <stdio.h>
int main()
{
  struct state
  {
    char sname[30];
    int no_dis;
    int population;
  };
  struct state arr[3];
  for (int i = 0; i < 3; i++)
  {
    printf("enter %d state name :", i + 1);
    scanf("%s", arr[i].sname);
    printf("enter %d no of district :", i + 1);
    scanf("%d", &arr[i].no_dis);
    printf("enter %d state population :", i + 1);
    scanf("%d", &arr[i].population);
  }
  for (int i = 0; i < 3; i++)
  {
    printf(" state name : %s\n", arr[i].sname);
    printf(" no of district : %d\n", arr[i].no_dis);
    printf(" state population : %d\n", arr[i].population);
  }

  return 0;
}