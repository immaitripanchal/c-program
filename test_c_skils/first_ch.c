#include <stdio.h>
// gcc .\basic.c  -o .\basic
// question 1
// int main()
// {
//     char  *s1,*s2;
//     printf("%zu %zu",sizeof(s1),sizeof(s2));
//     return 0;
// }

// question 2
// int x =40;
// int main()
// {
//     int x=20;
//     printf("%d",x);
// }

// question 3
//   int main()
//  {
//      int x =40;
//      {
//          int x=20;
//          printf("%d",x);
//      }
//       printf("%d",x);
//  }

// question 5
//  int main()
//  {
//      extern int i;
//      i=20;
//      printf("%zu",sizeof(i));
//  }

// question 9
// int main()
// {
//     extern int a;
//     printf("%d",a);
// }
// int a=20;

// question 16
//  int main()
//  {
//      extern int fun(float);
//      int a;
//      a=fun(3.14);
//      printf("%d",a);
//  }
//  int fun(aa)
//  float aa;
//  {
//      return ((int)aa);
//  }