#include<stdio.h>
void main(){
  //    1 2 3 4 5 6 = j
  // 1  * * * * * *
  // 2  *         *        
  // 3  *         *   
  // 4  * * * * * *  
  // i


for(int i=1; i<=4; i++){

  for(int j=1; j<=6; j++){
    if(i==1 || i==4 || j==1 || j==6)
    printf(" * ");
    else printf("   ");
  }
  printf("\n");
}




}