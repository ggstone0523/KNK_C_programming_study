#include <stdio.h>

int main(void) {
  int dollar = 0;
  int num_of_20 = 0;
  int num_of_10 = 0;
  int num_of_5 = 0;
  int num_of_1 = 0;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar);

  num_of_20 = dollar / 20;
  dollar = dollar - 20 * num_of_20;

  num_of_10 = dollar / 10;
  dollar = dollar - 10 * num_of_10;

  num_of_5 = dollar / 5;
  dollar = dollar - 5 * num_of_5;

  num_of_1 = dollar;

  printf("$20 bills: %d\n", num_of_20);
  printf("$10 bills: %d\n", num_of_10);
  printf(" $5 bills: %d\n", num_of_5);
  printf(" $1 bills: %d\n", num_of_1);

  return 0;
}
