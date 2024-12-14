#include<stdio.h>
void main(){
      //  1 2 3 4 5=j
  //  1   A B C D E
  //  2   1 2 3 4  
  //  3   A B C 
  //  4   1 2  
  //  5   A   
  //  i
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);
   
   for(int i=r; i>=1; i--){     
     int a=1;
  for(int j=1; j<=i; j++){
      if(i%2==0){
        printf(" %d ",j);
      }
      else{
         printf(" %c ",a+64);
         a++;
      }
    }
    printf("\n");
   }



}