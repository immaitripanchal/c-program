#include<stdio.h>
void main(){

  int n;
  float sum=0.0;
  printf("enter value of n :");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    sum=sum+1.0/i;
    if(i<n)
    printf("(1 / %d)+",i);
    else
    printf("(1 / %d)=",i);
  }
  printf("%f",sum);

}