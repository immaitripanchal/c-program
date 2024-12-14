#include<stdio.h>
void main(){

  int n; 
  printf("enter a number :");
  scanf("%d",&n);

  if(n==0)printf("please enter a valid number");
  else if(n%2==0)printf("the given number is even");
  else printf("the given number is odd");

}