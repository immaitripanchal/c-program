#include<stdio.h>
void main(){

  int n ,sum1=0,sum2=0 ,fsum=0;
  printf("enter any number=");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    if(i%2==0){
       sum1=sum1-i;
       }
       else{
        sum2=sum2+i;
       }
    }
    fsum=sum1+sum2;
  printf("sum of given series is %d",fsum);

}