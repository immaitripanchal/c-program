#include<stdio.h>
void main(){

  // ****
  // ***
  // **
  // *
int r;
printf("enter number of rows=");
scanf("%d",&r);

  for(int i=r; i>=1; i--){

    for(int j=1; j<=i; j++)
    printf("*");
    printf("\n");
  }
}