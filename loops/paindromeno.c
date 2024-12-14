#include<stdio.h>
void main(){

  int n,r,rn=0,n1;
  printf("enter any number to check if it is palindrome or not=");
  scanf("%d",&n);
  n1=n;
  while(n>0){
    r=n%10;
    n=n/10;
    rn=rn*10+r;
  }
  if(n1==rn)printf("the given number is palindrome");
  else printf("the given number is not palindrome");
}