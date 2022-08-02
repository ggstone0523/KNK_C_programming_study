#include "first.h"

int print_star(int star_pos, bool is_enter) {
  for (int i = 0; i < star_pos - 1; i++)
    printf(" ");

  printf("*");

  if (is_enter)
    printf("\n");

  return 0;
}

int main(void) {
  print_star(8, true);
  print_star(7, true);
  print_star(6, true);
  print_star(1, false);
  print_star(4, true);
  print_star(2, false);
  print_star(2, true);
  print_star(3, true);

  return 0;
}
