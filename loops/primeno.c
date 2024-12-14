#include<stdio.h>
void main()
{ 
  int n ;
  int a;
  printf("enter any number to check if it is prime or not=");
  scanf("%d",&n);
  a=0;
  if(n==0 || n==1){
    printf("it is not acceptable number please enter a number greater than this");
  } 
  
  else{
    for(int i=2; i<=n-1; i++){
    if(n%i==0){
      a=1;
      break;
    }
  }
    
   if(a==1)printf("the number is composite");
   else  printf("the given number is prime"); 
    

  
  

  }
  
}