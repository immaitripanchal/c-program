#include<stdio.h>
void main(){

//  A B C D 
//  A B C 
//  A B 
//  A
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
  

  for(int i=r; i>=1; i--){
    int a=65;
          for(int j=1; j<=i; j++){
    printf(" %c ",a); 
    a++;
      
    }
    printf("\n");
  }

}