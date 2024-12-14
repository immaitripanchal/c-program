  #include<stdio.h>
  void main(){
    int l,b,area,p;
    printf("enter length :");
    scanf("%d",&l);
    printf("enter breath :");
    scanf("%d",&b);
    area=l*b;
    p=2*(l+b);

    printf("the area is %d and the perimeter is %d\n",area,p);
    
    if(area>p)
    printf("the area is greater than the perimeter");
    else
    printf("the perimeter is greater than the area");
    
  }