#include<stdio.h>
void main(){
  int arr[5];

  for(int i=0; i<5; i++){

    printf("enter %d element:",i+1);
    scanf("%d",&arr[i]);
  }

  int product=1;
  for(int i=0; i<5; i++){
    product*=arr[i];
  }
  printf("the product of arrays is %d",product);
}