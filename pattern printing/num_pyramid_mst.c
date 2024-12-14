#include <stdio.h>
int main()
{
  //    1234567
  // 1  123 567
  // 2  12   67
  // 3  1     7
  int r;
  printf("enter number of rows :");
  scanf("%d", &r);

  int nsp = 1;
  

  for (int i = 1; i <= r * 2 + 1; i++)
  {
    printf("%d",i);
  }
  printf("\n");

  for (int i = r; i >= 1; i--)
  {
    int a=1;
    for (int j = 1; j <= i; j++)
    {
      printf("%d",a);
      a++;
    }
    
    for (int k = 1; k <= nsp; k++)
    {
      printf(" ");
      a++;
    }
    nsp += 2;
    for (int m = 1; m <= i; m++)
    {
      printf("%d",a);
      a++;
    }
    
    printf("\n");
  }
}