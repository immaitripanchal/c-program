#include<stdio.h>
void main(){
// i   1 2 3 4=j
// 1  # # # A 
// 2  # # A B 
// 3  # A B C 
// 4  A B C D 


  int r;
  printf("enter number of rows=");
  scanf("%d",&r);

  for(int i=1; i<=r; i++){

    for(int s=1; s<=r-i; s++){
      printf("  ");
    }

    for(int j=1; j<=i; j++){

      printf("%c ",64+j);
    }
    printf("\n");
  }


}