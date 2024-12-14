#include<stdio.h>
int main()
{
  // 1
  // 1 0
  // 1 0 1
  // 1 0 1 0
  // 1 0 1 0 1
  int r;
  printf("enter number of rows :");
  scanf("%d",&r);

  for(int i=1; i<=r; i++)
  {
    for(int j=1; j<=i; j++)
    {
      if(j%2==0)
      {
        printf("0 ");
      }
      else 
      {
          printf("1 ");
      }
    }
    printf("\n");
  }
}