#include<stdio.h>
void main(){
  //     1 2 3 4 5=j
  // 1   1
  // 2   0 1
  // 3   0 1 0
  // 4   1 0 1 0
  // 5   1 0 1 0 1
  //i

  int r,a=1;
  printf("enter number of rows=");
  scanf("%d",&r);

   for(int i=1; i<=r;i++){
    for(int j=1; j<=i; j++){
      printf("%d ",a);
      if(a==0)a=1;
      else a=0;
    }
    printf("\n");
 
    }


  }
