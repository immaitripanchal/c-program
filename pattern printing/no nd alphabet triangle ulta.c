#include<stdio.h>
void main(){
      //  1 2 3 4 5=j
  //  1   1 2 3 4 5
  //  2   A B C D  
  //  3   1 2 3 
  //  4   A B   
  //  5   1 
  //  i
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
   
   for(int i=r; i>=1; i--){     
     int a=1;
  for(int j=1; j<=i; j++){
      if(i%2==0){
         printf(" %c ",a+64);
         a++;
           }
      else{
        printf(" %d ",j);
          }
    }
    printf("\n");
   }



}