#include<stdio.h>
void main(){
// 1 2 3 4 5=j
//     *      1
//     *      2  
// * * * * *  3
//     *      4
//     *      5 
//            i
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);

  for(int i=1; i<=r; i++){
    
     for(int j=1; j<=r; j++){
        printf(" ");
     if(i==r/2+1 || j==r/2+1)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }

  
   
    










}