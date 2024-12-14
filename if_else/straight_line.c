    #include<stdio.h>
      void main(){

        double x1,x2,x3,y1,y2,y3,m1,m2;
        printf("enter x1,x2,x3 :");
        scanf("%lf%lf%lf",&x1,&x2,&x3);
        printf("enter y1,y2,y3 :");
        scanf("%lf%lf%lf",&y1,&y2,&y3);
        m1=(y2-y1)/(x2-x1);
        m2=(y3-y2)/(x3-x2);
        if(m1==m2){
          printf("the point fall on one straight line");
        }
        else{
           printf("the points do not fall on straight line");
        }

      }