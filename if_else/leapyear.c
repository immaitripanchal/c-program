#include<stdio.h>
void main(){

  int n; 
  printf("enter a year to check if it is a leap year or not :");
  scanf("%d",&n);

  if (n%100==0){
    if(n%400==0)printf("the given year is a leap year");
  }
  else if(n%4==0)printf("the given year is a leap year");
  else printf("the given year is not leap year");
}