#include <stdio.h>
void main()
{
  /* Deep copy */
  char s1[] = "Hello world !! physics wallah !!";
  int i = 0;
  int size = 0;
  while (s1[i] != '\0')
  {
    i++;
    size++;
  }
  char s2[size];
  int j = 0;
  while (s1[j] != '\0')
  {
    s2[j] = s1[j];
    j++;
  }
  puts(s1);
  puts(s2);

  /*  shallow copy
  char *s2 = s1;
  s1[0] = 'M';
  printf("%s\n", s2);
  printf("%s\n", s1); */
}
