#include <stdio.h>
#include <string.h>
int main()
{

  char str[] = "hello world !!! this is a test!!";
  char *ptr = str;
  int len = strlen(str);
  char str1[len + 1];
  char *ptr1 = str1;
  while (*ptr != '\0')
  {
    *ptr1 = *ptr;
    ptr++;
    ptr1++;
  }

  /* int i = 0;
  ptr = str;
  while (ptr < str + len)
  {
    str1[i] = *ptr;
    ptr++;
    i++;
  } */
  puts(str);
  puts(str1);
}