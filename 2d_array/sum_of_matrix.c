#include<stdio.h>
int main(){
  int r,c,sum=0;

  printf("enter a number of rows :");
  scanf("%d", &r);

  printf("enter a number of columns :");
  scanf("%d", &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      /* printf("enter element at position [%d][%d] :", i, j); */
      scanf("%d", &arr[i][j]);
    }
  }
   for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      sum+=arr[i][j];
    }
  }

  printf("sum of the matrix is %d",sum);






}