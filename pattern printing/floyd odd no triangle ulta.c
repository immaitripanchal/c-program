#include<stdio.h>
void main(){

  // 19 17 15 13
  // 11 9 7
  // 5 3
  // 1

  
    int a=19;
  for(int i=4; i>=1; i--){

    for(int j=1; j<=i; j++){
      printf(" %d ",a);
      a=a-2;
    }

     printf("\n");      
}


}