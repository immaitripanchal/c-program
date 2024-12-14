#include<stdio.h>
int reverse(int arr[]);
void main()
{

  int arr[10]={1,2,3,4,5,6,7,8,9,10};
 reverse( arr);
  for(int i=0; i<10; i++)
  printf("%d ",arr[i]);

  
}
int reverse(int arr[]){
  int i=0;
  int j=9;
  while(i<j){

    int s=arr[i];
    arr[i]=arr[j];
    arr[j]=s;
    i++;
    j--;
  }
}