#include <stdio.h>
#include <string.h>
int main()
{
  char str[] = "HELLO WORLD";
  int len = strlen(str);
  char *start = str, *end = str + len - 1;
  while (start < end)
  {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
  puts(str);
}