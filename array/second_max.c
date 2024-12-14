#include<stdio.h>
#include<limits.h>
void main(){

  int  arr[7]={10,24,34,45,45,56,66}, max=INT_MIN,smax=INT_MIN;

  for(int i=0; i<7; i++){

    if(max<arr[i]){
      max=arr[i];
    } 
  }
  for(int i=0; i<7; i++){
    if(smax<arr[i] && arr[i]!=max){

      smax=arr[i];
    }
  }
  printf("%d",smax);

  
}