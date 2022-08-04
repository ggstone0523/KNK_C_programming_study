#include <stdio.h>

int main(void) {
  float x = 0;
  float y = 0;

  printf("x = ");
  scanf("%f", &x);

  y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("y = %.2f\n", y);
  return 0;
}
