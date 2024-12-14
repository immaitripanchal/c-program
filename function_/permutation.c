#include<stdio.h>
int factorial(int x);
int permutation(int r,int n);
int main(){
  int n;
  printf("enter n :");
  scanf("%d",&n);
  int r;
  printf("enter r :");
  scanf("%d",&r);
  int npr = permutation(r,n);
  printf("NPR is %d",npr);

}
int factorial(int x){
  int fact=1;
  for(int i=1; i<=x; i++){
    fact*=i;
  }
  return fact;
}
int permutation(int r, int n){
   int npr=factorial(n)/factorial(n-r);
   return npr;
}