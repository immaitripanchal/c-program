#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  char arr[50];

  printf("Enter first string: ");
  scanf("%[^\n]s", str);

  getchar();

  printf("enter second string: ");
  scanf("%[^\n]s", arr);

  int len = strlen(str);
  int a = 1;
  for (int i = 0; i < len; i++)
  {
    if (str[i] != arr[i])
    {
      a = 0;
      break;
    }
  }
  if (a == 1)
    printf("string are same");
  else
    printf("string are not same");
}