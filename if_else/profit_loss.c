#include<stdio.h>
void main(){
  int n1,n2;
  printf("enter cost price :");
  scanf("%d",&n1);
  printf("enter selling price :");
  scanf("%d",&n2);
  int profit=n2-n1;

  if(n1>n2)printf("you have made %d loss",profit);
  else if (n1<n2)printf("you have made %d profit",profit);
  else("there is no profit or loss");

}