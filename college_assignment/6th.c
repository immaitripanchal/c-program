#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
  char str[30];
  puts("enter your string to check if is a palindrome or not :");
  scanf("%[^\n]s", str);
  int size = strlen(str);

  int i = 0, j = size - 1, a;
  while (i < j)
  {
    if (str[i] == str[j])
    {
      i++;
      j--;
      a = 1;
    }
    else
    {
      puts("sting is not palindrome ");
      break;
    }
  }
  if (a == 1)
  {
    puts("string is palindrome ");
  }
}