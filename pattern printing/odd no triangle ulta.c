#include<stdio.h>
void main(){
   
  //  1 3 5 7
  //  1 3 5
  //  1 3
  //  1

  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
   for(int i=r; i>=1; i--){
       int a=1;
    for(int j=1;  j<=i; j++){
      printf(" %d ",a);
      a=a+2;
    }
    printf("\n");
  }
}