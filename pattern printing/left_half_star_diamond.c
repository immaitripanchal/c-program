#include<stdio.h>
int main()
{
  //      *
  //    * *
  //  * * *
  //  * * *
  //    * *
  //      *

  int r;
  printf("enter number of rows :");
  scanf("%d",&r);

  // ascending order
  for(int i=1; i<=r; i++)
  {
    for(int k=r-i; k>=1; k--)
    {
      printf(" ");
    }
    for(int j=1; j<=i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  // descending  order
  for(int i=r; i>=1; i--)
  {
    for(int k=1; k<=r-i; k++)
    {
      printf(" ");
    }
    for(int j=i; j>=1; j--)
    {
      printf("*");
    }
    printf("\n");
  }
}