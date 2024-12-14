#include<stdio.h>
void main(){

  // A B C D
  // A B C D
  // A B C D
  // A B C D
    int r;
  printf("enter number of rows=");
  scanf("%d",&r);
  

  for(int i=1; i<=r; i++){
    int a=65;
          for(int j=1; j<=r; j++){
    printf(" %c ",a); 
    a++;
      
    }
    printf("\n");
  }

}