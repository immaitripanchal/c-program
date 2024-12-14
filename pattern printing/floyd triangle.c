#include<stdio.h>
void main(){

  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10

  int r;
  int a=1;
  printf("enter number of rows=");
  scanf("%d",&r);
    
  for(int i=1; i<=r; i++){

    for(int j=1; j<=i; j++){
      printf(" %d ",a);
      a++;
    }

     printf("\n");      
}


}