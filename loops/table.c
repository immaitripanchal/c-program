#include<stdio.h>
void main(){

  int n1,n2;
  printf("enter first number=");
  scanf("%d",&n1);
  printf("\nenter second number=");
  scanf("%d",&n2);

  for(int j=n1; j<=n2; j++){
    printf("table of %d\n",j);
    for(int i=1; i<=10; i++){
      printf("%d * %d = %d\n",j,i,j*i);
    }
    printf("\n");
  }

}