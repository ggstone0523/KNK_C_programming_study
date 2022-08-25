#include <stdio.h>

int main(void) {
  int ean_digit[12];
  int i;
  int first_num = 0;
  int second_num = 0;
  int total;

  printf("Enter the first 12 digits of an EAN: ");
  for (i = 0; i < 12; i++) {
    scanf("%1d", &ean_digit[i]);
  }
  for (i = 0; i < 12; i++) {
    if (i % 2 == 1) {
      first_num += ean_digit[i];
    } else {
      second_num += ean_digit[i];
    }
  }
  total = 3 * first_num + second_num;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
