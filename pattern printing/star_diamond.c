#include<stdio.h>
void main(){

  // i 1 2 3 4 5 6 7 =j
  // 1       *      
  // 2     * * *   
  // 3   * * * * *
  // 4 * * * * * * *
  // 5   * * * * *
  // 6     * * *
  // 7       *
  int r;
    printf("enter number of rows :");
    scanf("%d",&r);
    int nsp=r/2;
    int nst=1;
    int ml=r/2+1;
    for(int i=1; i<=r; i++){
        
        for(int k=1; k<=nsp; k++){
            printf(" ");
        }
        for(int j=1; j<=nst; j++){
           printf("*");
           
        }
        if(i<ml){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;

            
        }
        printf("\n");
        
     }  
 

 }
