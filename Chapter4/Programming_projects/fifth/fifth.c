#include <stdio.h>

int main(void) {
  int d;
  int i1;
  int i2;
  int i3;
  int i4;
  int i5;
  int j1;
  int j2;
  int j3;
  int j4;
  int j5;
  int first_num;
  int second_num;
  int total;

  printf("Enter the first 11 digit of a UPC: ");
  scanf("%1d", &d);
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  first_num = d + i2 + i4 + j1 + j3 + j5;
  second_num = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_num + second_num;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
