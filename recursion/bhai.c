#include<stdio.h>
int num( int n);
int main(){
  int n=5;
  num(n);
  

}
int num(int n){
  if(n==0)
  {
    printf("\n");
    return 0;
  }
  printf("%d\n",n);
  num(n-1);
  printf("%d\n",n);
  
}