#include<stdio.h>
void main(){

//   A 
//   A B 
//   A B C 
//   A B C D
    int r;
  printf("enter number of rows=");
  scanf("%d",&r);
  

  for(int i=1; i<=r; i++){
    int a=65;
          for(int j=1; j<=i; j++){
    printf(" %c ",a); 
    a++;
      
    }
    printf("\n");
  }

}