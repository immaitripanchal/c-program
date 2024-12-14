#include<stdio.h>
void main(){
  int n,sum=0;

  printf("enter any number=");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    sum=sum+i;

  }
  printf("sum of given number is %d",sum);
}