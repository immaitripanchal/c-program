#include<stdio.h>
void main(){

  int a;
  printf("enter first side of triangle :");
  scanf("%d",&a);
  int b;
  printf("enter second side of triangle :");
  scanf("%d",&b);
  int c;
  printf("enter third side of triangle :");
  scanf("%d",&c);


  if((a+b)>c && (a+c)>b && (b+c)>a)
  printf("valid triangle :");
  else
  printf("invalid triangle");

}