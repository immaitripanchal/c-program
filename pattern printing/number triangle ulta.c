#include<stdio.h>
void main(){

  // 1234
  // 123
  // 12
  // 1
int r;
printf("enter number of rows=");
scanf("%d",&r);


  for(int i=r; i>=1; i--){

    for(int j=1; j<=i; j++)
    printf(" %d ",j);
    printf("\n");
  }
}