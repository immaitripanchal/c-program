#include<stdio.h>
int factorial(int x);
int combination(int r, int n);
int main(){
  int n;
  printf("enter n :");
  scanf("%d",&n);
  int r;
  printf("enter r :");
  scanf("%d",&r);
  int ncr=combination(r,n);
 
  printf("NCR is %d",ncr);

}

int factorial(int x){
  int fact=1;
  for(int i=1; i<=x; i++){
    fact*=i;
  }
  return fact;
}
int combination(int r,int n){
   int ncr=factorial(n)/(factorial(r)*factorial(n-r));
   return ncr;

}