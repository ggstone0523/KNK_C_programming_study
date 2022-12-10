#include <stdio.h>

int main(void) {
  int num = 0;
  int digits = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num > 99) {
    digits = 3;
  } else if (num > 9) {
    digits = 2;
  } else {
    digits = 1;
  }
  printf("The number %d has %d digits\n", num, digits);
  return 0;
}
