#include <stdio.h>
int main()
{
  struct pokemon
  {
    int speed;
    int attack;
    char tier;
  };
  struct pokemon pika;
  pika.speed = 90;
  pika.attack = 50;
  pika.tier = 'A';

  printf("pika speed is %d\n", pika.speed);
  printf("pika attack is %d\n", pika.attack);
  printf("pika tier is %c\n", pika.tier);
}