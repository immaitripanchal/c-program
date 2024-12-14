#include<stdio.h>
void main(){

  int arr[5]={1,2,3,4,5} ,sum=0;

  for(int i=0; i<=4; i++){

    sum+=arr[i];
  }
  printf("%d\n",sum);


}