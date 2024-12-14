#include<stdio.h>
void main(){

  // 1
  // 3 5
  // 7 9 11
  // 13 15 17 19

  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
    int a=1;
  for(int i=1; i<=r; i++){

    for(int j=1; j<=i; j++){
      printf(" %d ",a);
      a=a+2;
    }

     printf("\n");      
}


}