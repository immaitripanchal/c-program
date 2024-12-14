#include <stdio.h>
#include <string.h>
int main()
{
  struct book
  {
    char name[50];
    int price;
    int pages;
  };
  struct book arr[2];
  for (int i = 0; i < 2; i++)
  {
    printf(" enter book name :");
    scanf("%s", arr[i].name);
    printf("enter price : ");
    scanf("%d", &arr[i].price);
    printf("enter pages :");
    scanf("%d", &arr[i].pages);
  }
  printf("\nname   price   pages");
  for (int i = 0; i < 2; i++)
  {

    printf("\n%s\t%d\t%d\t", arr[i].name, arr[i].price, arr[i].pages);
  }
}