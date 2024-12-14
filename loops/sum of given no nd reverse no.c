#include<stdio.h>
void main(){

  int n,r,rn=0,n1;

  printf("enter any number=");
  scanf("%d",&n);
  n1=n;

   while(n>0){
    r=n%10;
    n=n/10;
    rn=rn*10+r;
    
}
printf("the given number is =%d\n",n1);
printf("reverse of given number is =%d\n",rn);
printf("sum of given number and it's reverse number is= %d\n",n1+rn);







}