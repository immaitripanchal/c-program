#include<stdio.h>
int main()
{ //   123456
  // 1 123456
  // 2 1    6
  // 3 1    6
  // 4 123456
  int r;
  printf("enter number of rows :");
  scanf("%d",&r);
  int c;
  printf("enter number of columns :");
  scanf("%d",&c);

  for(int i=1; i<=r; i++)
  {
    for(int j=1; j<=c; j++)
    {
      if(i==1 || i==r || j==1 || j==c)
      {
        printf("%d",j);
      }
      else
      {
        printf(" ");
      }
      
    }
    printf("\n");
  }
}