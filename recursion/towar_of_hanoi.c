#include <stdio.h>
void hanoi(int n, char sr, char h, char d);
int main()
{
  int n;
  printf("Enter the number of disks: ");
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
  return 0;
}
void hanoi(int n, char sr, char h, char d)
{
  if (n == 0)
    return;
  hanoi(n - 1, sr, d, h);
  printf("%c --> %c\n", sr, d);
  hanoi(n - 1, h, sr, d);
  return;
}