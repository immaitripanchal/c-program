#include<stdio.h>
void main()
{ 
 int n,a,i;
 printf("prime number between 50 to 100\n");
 
 for(n=50; n<=100; n++){
  a=1;

for(i=2; i<=n-1; i++){
    

    if(n%i==0){
      a=0;
      break;
    }
  
  }
  if(a==1)printf(" %d\n ",n);
 }    
}
  
