#include<stdio.h>
void main(){

  int n,n1,max=0;
  printf("how many input do you want to enter=");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    printf("enter your %d value=",i);
    scanf("%d",&n1);
    if(n1>max)
    max=n1;
  }
  printf("the maximum number from given number is %d",max);
  

}