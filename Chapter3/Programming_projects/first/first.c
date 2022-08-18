#include <stdio.h>

int main(void) {
  int day = 1;
  int month = 1;
  int year = 1;

  printf("Enter a date (mm/dd/yyyy) : ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %04d%02d%02d\n", year, month, day);

  return 0;
}
