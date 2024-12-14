#include <stdio.h>
int main()
{
  //    ABCDEFG
  // 1  ABC DEF
  // 2  AB   EF
  // 3  A     F
  int r;
  printf("enter number of rows :");
  scanf("%d", &r);

  int nsp = 1;
  int b=65;
  

  for (int i = 1; i <= r * 2 + 1; i++)
  {
    printf("%c",b);
    b++;
  }
  printf("\n");

  for (int i = r; i >= 1; i--)
  {
    int a=65;
    for (int j = 1; j <= i; j++)
    {
      printf("%c",a);
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
      printf("%c",a);
      a++;
    }
    
    printf("\n");
  }
}