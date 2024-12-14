#include <stdio.h>
int main()
{
  char str[50];
  puts("enter your string :");
  scanf("%[^\n]s", str);

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
  }
  printf("string in uppercase is : %s\n", str);
}