#include<stdio.h>
int main()
{
  int n;
  printf("enter any number :");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    int a=i;
    for(int j=1; j<=n; j++)
    {
      if(a<=n)
      {
        printf("%d ",a);
        a++;
      }
      else if((a>n) && (i!=1))
      {
        a=1;
        printf("%d ",a);
        a++;
      }
      
    }
    
    printf("\n");
  }
}