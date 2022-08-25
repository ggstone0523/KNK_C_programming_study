#include <stdio.h>

int main(void) {
  char phone_number[10];

  printf("Enter phone number [ (xxx) xxx-xxxx] : ");
  scanf("(%c%c%c) %c%c%c-%c%c%c%c", &phone_number[0], &phone_number[1],
        &phone_number[2], &phone_number[3], &phone_number[4], &phone_number[5],
        &phone_number[6], &phone_number[7], &phone_number[8], &phone_number[9]);

  printf("You entered ");
  for (int i = 0; i < 10; i++) {
    printf("%c", phone_number[i]);
    if (i == 2 || i == 5) {
      printf(".");
    }
  }
  printf("\n");

  return 0;
}
