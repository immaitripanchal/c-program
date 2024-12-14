#include<stdio.h>
void increasing(int x,int n);
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  increasing(1,n);
}
void increasing(int x,int n)
{
  if(x>n)
  {
    return;
  }
  printf("%d\n",x);
  increasing(x+1,n);
  
}