#include <stdio.h>

int main(void) {
  int number;
  int octal[5];
  int i;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);

  printf("In octal, your number is: ");
  for (i = 0; i < 5; i++) {
    octal[4 - i] = number % 8;
    number = number / 8;
  }
  for (i = 0; i < 5; i++) {
    printf("%d", octal[i]);
  }
  printf("\n");

  return 0;
}
