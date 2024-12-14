#include<stdio.h>
void main(){

  // 1
  // 12
  // 123
  // 1234
int r;
printf("enter number of rows=");
scanf("%d",&r);


  for(int i=1; i<=r; i++){

    for(int j=1; j<=i; j++)
    printf(" %d ",j);
    printf("\n");
  }
}