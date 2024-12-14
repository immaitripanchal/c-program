#include<stdio.h>
void main(){
//  i  1 2 3 4=j
//  1  # # # *
//  2  # # * * *
//  3 #  * * * * *
//  4 * * * * * * *

  int r,a=1;
  printf("enter number of rows=");
  scanf("%d",&r);
  
  for(int i=1; i<=r; i++){

    for(int s=1; s<=r-i; s++){
      printf("  ");
    }
    
   for(int j=1; j<=a; j++){

      printf("* ");
      
    }
    printf("\n");
    a=a+2;
  }


}