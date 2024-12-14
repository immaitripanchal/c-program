#include<stdio.h>
void main(){
  // i  1 2 3 4 5 6 7=j
  // 1         A 
  // 2       A B C
  // 3     A B C D E
  // 4   A B C D E F G

  int r,n=1;
  printf("enter number of rows=");
  scanf("%d",&r);


   for(int i=1; i<=r; i++){
      int a=65;
     for(int s=1; s<=r-i; s++){

      printf(" ");
     }
     for(int j=1; j<=n; j++){

      printf("%c",a);
      a++;
     }
     printf("\n");
     n=n+2;
   }     
      
} 
