#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  char arr[50];

  printf("Enter first string: ");
  fgets(str, strlen(str), stdin);
  // scanf("%[^\n]s", str);

  // getchar();

  printf("enter second string: ");
  fgets(arr, strlen(arr), stdin);
  // scanf("%[^\n]s", arr);

  char *ptr = str;
  char *ptr1 = arr;

  int len = strlen(str);
  int a = 1;
  while (*ptr != '\0')
  {
    if (*ptr != *ptr1)
    {
      a = 0;
      break;
    }
    ptr++;
    ptr1++;
  }
  if (a == 1)
    printf("string are same");
  else
    printf("string are not same");
}