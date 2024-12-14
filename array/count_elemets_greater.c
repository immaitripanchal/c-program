#include<stdio.h>
void main(){

  int x;
  printf("enter any number:");
  scanf("%d",&x);

  int arr[10]={2,3,4,5,7,8,9,12,34,21};
  int count=0;
  for(int i=0; i<=10; i++){
     
    if(arr[i]>x){
      count++;
    }
  }
  printf("the number of greater  elemets is %d",count);
}