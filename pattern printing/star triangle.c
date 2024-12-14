#include<stdio.h>
void main(){

  // *
  // **
  // ***
  // ****
int r;
printf("enter number of rows=");
scanf("%d",&r);

  for(int i =1; i<=r; i++){

    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
}