#include <stdio.h>
int main()
{
  char str[50];
  puts("enter your string :");
  scanf("%[^\n]s", str);
  int len = 0;
  int i = 0;
  while (str[i] != '\0')
  {
    len++;
    i++;
  }
  printf("length of string is %d", len);
}