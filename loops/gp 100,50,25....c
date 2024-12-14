#include<stdio.h>
void main(){
  int n;
 printf("enter any number=");
  scanf("%d",&n);
  float a=100;
  for(int i=1; i<=n; i++){
    printf(" %.2f ",a);
    a=a/2;
  }
    }