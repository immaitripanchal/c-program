#include<stdio.h>
int main()
{
  int r;
  printf("enter number of rows :");
  scanf("%d",&r);
  // 1 2 3 4 
  // 1 2 3
  // 1 2
  // 1
  // 1 2
  // 1 2 3
  // 1 2 3 4

  // descending order
  for(int i=r; i>=1; i--)
  {
    for(int j=1; j<=i; j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }

  // ascending  order
  for(int i=2; i<=r; i++)
  {
    for(int j=1; j<=i; j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
}