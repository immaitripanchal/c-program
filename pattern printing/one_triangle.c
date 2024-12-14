#include<stdio.h>
int main()
{
  // 1
  // 1 1
  // 1 1 1
  // 1 1 1 1

  int r;
  printf("enter number of rows :");
  scanf("%d",&r);
  
  for(int i=1; i<=r; i++)
  {
    for(int k=1; k<=r-i; k++)
    {
      printf(" ");
    }
    for(int j=1; j<=i; j++)
    {
      printf("1 ");
    }
    printf("\n");
  }


}