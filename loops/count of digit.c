#include<stdio.h>
void main(){

  int n,count=0;
  printf("enter any number=");
  scanf("%d",&n);

  while(n>0){
    //1234
    
    n=n/10;
    count++;

  }
  printf("count of the given number is %d",count);
}