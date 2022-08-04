#include <stdio.h>
#define PI 3.14

int main(void) {
  float radius = 10.0f;
  float volume = 0;

  volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("If radius = %.2f, volume of sphere is %.2f\n", radius, volume);
  return 0;
}
