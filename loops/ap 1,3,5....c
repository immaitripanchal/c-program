#include<stdio.h>
void main(){
int n;
  printf("enter any number=");
  scanf("%d",&n);
  int a=1;
  for(int i=1; i<=n; i++){
    printf(" %d ",a);
    a=a+2;
  }
}