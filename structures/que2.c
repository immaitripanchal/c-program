#include <stdio.h>
struct item
{
  int code;
  char name[50];
  float price;
};
void increasePrice(struct item arr[]);
int main()
{
  struct item arr[5];

  printf("enter details for items :\n");

  for (int i = 0; i < 2; i++)
  {
    printf("enter %d item code :", i + 1);
    scanf("%d", &arr[i].code);
    printf("enter %d item name :", i + 1);
    scanf("%s", arr[i].name);
    printf("enter %d item price :", i + 1);
    scanf("%f", &arr[i].price);
  }
  increasePrice(arr);

  printf(" item details after increasing price :\n");
  printf("\n");

  for (int i = 0; i < 2; i++)
  {

    printf(" item code : %d\n", arr[i].code);
    printf(" item name : %s\n", arr[i].name);
    printf(" item price after increasing : %.2f\n", arr[i].price);
  }
}
void increasePrice(struct item arr[])
{
  for (int i = 0; i < 2; i++)
  {
    arr[i].price = arr[i].price + arr[i].price * 0.10;
  }
}