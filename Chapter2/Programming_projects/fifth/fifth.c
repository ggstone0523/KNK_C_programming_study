#include "fifth.h"

float expot(float a, int x) {
  float static_a = a;

  for (int i = 1; i < x; i++)
    a = a * static_a;

  return a;
}

void test_case(float a, int x, float b) {
  if (expot(a, x) == b)
    printf("True\n");
  else
    printf("False\n");
}

void test_all(void) {
  test_case(2.0f, 3, 8.0f);
  test_case(5.0f, 3, 125.0f);
  test_case(4.0f, 3, 64.0f);
  test_case(7.0f, 2, 49.0f);
  test_case(9.0f, 2, 81.0f);
  test_case(2.0f, 10, 1024.0f);
  test_case(2.0f, 7, 128.0f);
}

int main(void) {
  float x = 0;
  float y = 0;

  // test_all();

  printf("x = ");
  scanf("%f", &x);

  y = (3.0f * expot(x, 5)) + (2.0f * expot(x, 4)) - (5.0f * expot(x, 3)) -
      expot(x, 2) + (7 * x) - 6;

  printf("y = %.2f\n", y);
  return 0;
}
