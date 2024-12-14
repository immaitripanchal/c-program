#include <stdio.h>
int main()
{
  // FILE *ptr = fopen("text.txt", "w");
  // char s[] = "hello this is your host today i am whatever writing is i do not know but i am writing idk why";
  // fputs(s, ptr);
  FILE *ptr = fopen("text.txt", "r");
  char s[100];
  while (fgets(s, 100, ptr) != NULL)
  {
    printf("%s", s);
  }
  fclose(ptr);
}