#include<stdio.h>
void main(){

  int n,a=4;
  printf("enter any number=");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){

    printf(" %d ",a);
    a=a+3;
  }
}