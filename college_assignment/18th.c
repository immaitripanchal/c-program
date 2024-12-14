#include <stdio.h>
#include <string.h>
int main()
{
  char str[50] = "hello ";
  char str1[] = "world";
  char *ptr = str;
  char *ptr1 = str1;
  // Concatenate strings
  while (*ptr != '\0')
  {
    ptr++;
  }
  while (*ptr1 != '\0')
  {
    *ptr = *ptr1;
    ptr++;
    ptr1++;
  }

  *ptr = '\0';

  puts("Concatenated string:");
  puts(str);

  return 0;
}
