#include<stdio.h>
void main(){

  int n,sum=0;  
  printf("enter any number :");
  scanf("%d",&n);

  for(int i=1; i<n; i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  if(sum==n){
    printf("the number is perfect");
  }
  else{
    printf("the number is not perfect");
  }
}