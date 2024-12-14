#include<stdio.h>
void main(){

  int n1,n2,power=1; 
  printf("enter base :");
  scanf("%d",&n1);
  printf("enter power :");
  scanf("%d",&n2);

  for(int i=1; i<=n2; i++){
     power=power*n1;
  }
  printf("%d raised to the power of %d is %d",n1,n2,power);
}