#include<stdio.h>
void main(){
    // i 1 2 3 4 5 6 7=j
    // 1      1
    // 2    1 2 1
    // 3  1 2 3 2 1
    // 41 2 3 4 3 2 1
  
  
  int r;
  printf("enter number of rows=");
  scanf("%d",&r);

  for(int i=1; i<=r; i++){
      
    for(int s=1; s<=r-i; s++ ){

      printf(" ");
      }

    for(int j=1; j<=i; j++){

      printf("%d",j);
}
int a =i-1;
for(int k=1; k<=i-1; k++){

   printf("%d",a);
   a--;
}

    printf("\n");
  }
}