#include<stdio.h>
void main(){
   int x,y;
   printf("enter the coordinates :");
   scanf("%d %d",&x,&y);
   if(x==0 && y==0){
    printf("the point is origin ");
   }
   else if(y==0){
    printf("the origin lies on x-axis ");

   }
   else if(x==0){
    printf("the origin lies on y-axis");
   }
   else {
    printf("the point does not lie on x or y axis");
   }
   
}