#include<stdio.h>
#include<stdbool.h>
void main(){

  int arr[10]={1,2,3,4,5,6,7,8,9,0};
  int x,idx=0;
  bool flag=false;
  printf("enter element to check if it is present or not:");
  scanf("%d",&x);
  

  for(int i=0; i<10; i++){

    if(x==arr[i]){
      flag=true;
      idx=i;
      break;
    }
  }
  
    if(flag==true) printf("%d element is present at %d index",x,idx);
    else  printf("%d element is not present",x);

  
}