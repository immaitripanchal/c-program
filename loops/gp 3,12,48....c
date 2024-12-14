#include<stdio.h>
void main(){
  int n,a=3;
  printf("enter any number=");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
     
    printf(" %d ",a);
    a=a*4;
  }
}