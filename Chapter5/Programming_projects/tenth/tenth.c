#include <stdio.h>

int main(void) {
  int numerical_grade = -1;
  int numerical_grade_ten_digit = -1;

  printf("Enter numerical grade: ");
  scanf("%d", &numerical_grade);

  if (numerical_grade > 100 || numerical_grade < 0) {
    printf("numerical grade must be 0 <= numerical grade <= 100 !\n");
  } else {
    numerical_grade_ten_digit = numerical_grade / 10;

    printf("Letter grade: ");
    switch (numerical_grade_ten_digit) {
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    default:
      printf("F\n");
    }
  }

  return 0;
}
