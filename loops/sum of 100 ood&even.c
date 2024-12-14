#include<stdio.h>
void main(){
  int odd_sum,odd_count=0,even_sum,even_count=0;

  for(int i=1; odd_count<=100 && even_count<=100; i++){

    if(i%2==0){

      even_sum=even_sum+i;
      even_count++;
    }
    else{
      odd_sum+=i;
      odd_count++;
    }
  }
  printf("sum of first 100 even number is %d\n",even_sum);
  printf("sum of first 100 odd number is %d\n",odd_sum);
}