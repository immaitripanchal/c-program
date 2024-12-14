#include<stdio.h>
void main(){

  // i 1 2 3 4 5 6 7 =j
  // 1       A
  // 2     A B A
  // 3   A B C B A
  // 4 A B C D C B A

  int r;
  printf("enter number of rows=");
  scanf("%d",&r);

  for(int i=1; i<=r; i++){

    for(int s=1; s<=r-i; s++){

      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("%c",j+64);
    }
    
        
        int a=64;
        
    for(int k=1; k<=i-1; k++){
      
      printf("%c",i-1+a);
      a--;
    

    
  }
   
    printf("\n");
  }

  


}