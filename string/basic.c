#include <stdio.h>
void main()
{
  // char str[6] = {'m', 'a', 'i', 't', 'r', 'i'};
  // for (int i = 0; i < 6; i++)
  // {
  //   printf("%c", str[i]);
  // }
  // type casting
  // char ch = '\0';
  // int x = (int)ch;
  // printf("\n%d", x);

  // char string[] = "\nhello! it is a program hosting the show :";
  // printf("%s", string);
  // printf("\n");
  // puts(string);
  // int i = 0;
  // while (string[i] != '\0')
  // {
  //   printf("%c", string[i]);
  //   i++;
  // }
  char str[100];
  scanf("%[^\n]s", str);
  puts(str);
}
