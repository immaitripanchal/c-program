#include<stdio.h>
void decreasing(int n);
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  decreasing(n);
}
void decreasing(int n)
{
  if(n==0)
  {
    return;
  }
  printf("%d\n",n);
  decreasing(n-1);
}