#include<stdio.h>
void main(){

  int n; 
  printf("enter a number to check if it is absolute value or not:");
  scanf("%d",&n);

  if(n<0){
    n=n*-1;
   printf("the absolute value of given number is %d",n);
  }
  else printf("the absolute value of given number is %d",n);
  
}