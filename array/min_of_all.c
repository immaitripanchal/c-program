#include<stdio.h>
#include<limits.h>
void main(){

  int n;
  printf("enter how many times array elements you want :");
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    printf("enter %d array element :",i+1);
    scanf("%d",&arr[i]);
  }
  int min=INT_MAX;
  for(int i=0; i<n; i++){

    if(min>arr[i]){
      min=arr[i];
    }
  }
  printf("the minimum element of the array is %d",min);
}