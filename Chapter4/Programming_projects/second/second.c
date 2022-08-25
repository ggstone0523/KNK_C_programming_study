#include <stdio.h>

int main(void) {
  int number;
  int two_digit;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  two_digit = number % 100;
  printf("The reversal is: %d%d%d\n", two_digit % 10, two_digit / 10,
         number / 100);

  return 0;
}
