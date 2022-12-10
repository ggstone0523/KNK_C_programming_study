#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int hour = 0;
  int minute = 0;
  bool is_this_AM = false;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  if (hour == 24) {
    hour = hour - 12;
    is_this_AM = true;
  } else if (hour > 12) {
    hour = hour - 12;
  } else if (hour != 12) {
    is_this_AM = true;
  }

  if (is_this_AM) {
    printf("Equivalent 12-hour time: %02d:%02d AM\n", hour, minute);
  } else {
    printf("Equivalent 12-hour time: %02d:%02d PM\n", hour, minute);
  }

  return 0;
}
