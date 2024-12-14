#include <stdio.h>
#include <string.h>
int main()
{
  /* char str[] = "hello world !! This ia a your host";
  char *ptr = str;
  // int i = 0;
  while (*ptr != '\0')
  {
    printf("%c", *ptr);
    // i++;
    ptr++;
  } */
  /* pointer initialization */
  /* char *ptr = "hello world !! This ia a your host";
   ptr = "physics wallah";
     printf("%s", ptr); */

  /*   pointer initialization  you can't change the individual characters but you can change whole string */

  /*  in normal initialization you can't change the whole string but you can change individual characters  */

  char str[] = "hello world !! This ia a your host";
  char *ptr = str;
  ptr = "hello !!";
  printf("%s", ptr);
}