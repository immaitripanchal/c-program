#include<stdio.h>
void main(){

  int n,x,sum=0;

  printf("enter value of x :");
  scanf("%d",&x);
  printf("enter value of n :");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    sum=sum+x*i;
    if(i<n)
    printf("(%d * %d)+",x,i);
    else
    printf("(%d * %d)=",x,i);
  }
  printf("%d",sum);

}