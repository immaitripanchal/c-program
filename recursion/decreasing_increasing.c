#include<stdio.h>
void decreasing_increasing(int n);
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  decreasing_increasing(n);
}
void decreasing_increasing(int n)
{
  if(n==0)
  {
    return;
  }
  printf("%d\n",n);
  decreasing_increasing(n-1);
  printf("%d\n",n);
}