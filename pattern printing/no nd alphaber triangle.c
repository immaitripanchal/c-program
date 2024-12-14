#include<stdio.h>
void main(){
      //  1 2 3 4 5=j
  //  1   1 
  //  2   A B  
  //  3   1 2 3 
  //  4   A B C D  
  //  5   1 2 3 4 5
  //  i
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
   
   for(int i=1; i<=r; i++){     
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