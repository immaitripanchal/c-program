#include<stdio.h>
void main(){
  //     1 2 3 4 5=j
  // 1   1
  // 2   0 0
  // 3   1 1 1
  // 4   0 0 0 0
  // 5   1 1 1 1 1
  //i

  int r,a=1;
  printf("enter number of rows=");
  scanf("%d",&r);

   for(int i=1; i<=r;i++){
    for(int j=1; j<=i; j++){
      printf("%d ",a);
          }
    printf("\n");
    if(a==0)a=1;
      else a=0;

 
    }


  }
