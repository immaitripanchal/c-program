#include<stdio.h>
void main(){

  int n,r,rn=0;

  printf("enter any number=");
  scanf("%d",&n);

   while(n>0){
   r=n%10;
    n=n/10;
    rn=rn*10+r;
    
}
printf("reverse of given number is %d",rn);







}