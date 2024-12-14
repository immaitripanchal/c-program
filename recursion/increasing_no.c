#include<stdio.h>
void increasing(int n);
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  increasing(n);
}

void increasing(int n)
{
  if(n==0)
  {
    return;
  }
  increasing(n-1);
  printf("%d\n",n);
  
}