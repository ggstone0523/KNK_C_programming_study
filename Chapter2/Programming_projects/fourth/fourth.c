#include <stdio.h>

int main(void) {
  float dollars_and_cents = 0;
  float tax_added = 0;
  float tax_percent = 5.0f / 100.0f;

  printf("Enter an amount: ");
  scanf("%f", &dollars_and_cents);

  tax_added = dollars_and_cents * tax_percent + dollars_and_cents;

  printf("With tax added: %.2f\n", tax_added);
  return 0;
}
