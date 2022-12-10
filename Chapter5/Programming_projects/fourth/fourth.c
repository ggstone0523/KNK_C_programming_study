#include <stdio.h>

int main(void) {
  double knots = 0.0;

  printf("Please enter wind speed (in knots): ");
  scanf("%lf", &knots);

  printf("wind force's Beaufort scale is ");
  if (knots >= 64.0) {
    printf("Hurricane\n");
  } else if (knots >= 48.0) {
    printf("Storm\n");
  } else if (knots >= 28.0) {
    printf("Gale\n");
  } else if (knots >= 4.0) {
    printf("Breeze\n");
  } else if (knots >= 1.0) {
    printf("Light air\n");
  } else {
    printf("Calm\n");
  }

  return 0;
}
