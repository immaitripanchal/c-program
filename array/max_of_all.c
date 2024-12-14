#include<stdio.h>
#include<limits.h>
void main(){
 int n;
 printf("enter how many times array elements you want :");
 scanf("%d",&n);
  int arr[n];
  int max=INT_MIN;

  for(int i=0; i<n; i++){

    printf("enter your %d element :",i+1);
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<n; i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  printf("the max element is %d",max);
}