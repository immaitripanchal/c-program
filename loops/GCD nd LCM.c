#include<stdio.h>
void main(){
  int n1,n2,gcd,lcm;
  printf("enter first number=");
  scanf("%d",&n1);
  printf("enter second number=");
  scanf("%d",&n2);

  for(int i=1; i<=n1 && i<=n2; i++){

    if(n1%i==0 && n2%i==0)
    gcd=i;
  }
  lcm=n1*n2/gcd;
  printf("gcd of %d and %d is %d\n",n1,n2,gcd);
  printf("lcm of %d and %d is %d\n",n1,n2,lcm);
}