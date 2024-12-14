#include<stdio.h>
void  main(){
//*****
//*****
//*****
int r,c;
printf("enter number of rows=");
scanf("%d",&r);
printf("enter number of columns=");
scanf("%d",&c);
for(int i=1; i<=r; i++){

  for(int j=1; j<=c; j++)
  printf("*");
  printf("\n");
}



}