#include<stdio.h>
void main(){

  // 10 9 8 7
  // 6 5 4
  // 3 2
  // 1

    int a=10;
  for(int i=4; i>=1; i--){

    for(int j=1; j<=i; j++){
      printf(" %d ",a);
      a--;
    }

     printf("\n");      
}


}