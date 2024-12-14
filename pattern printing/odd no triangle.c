#include<stdio.h>
void main(){

  // 1
  // 1 3
  // 1 3 5
  // 1 3 5 7
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
   for(int i=1; i<=r; i++){
       int a=1;
    for(int j=1;  j<=i; j++){
      printf(" %d ",a);
      a=a+2;
    }
    printf("\n");
  }
}