#include <stdio.h>

int main(void) {
  int square[4][4];
  int i, j, sum;
  printf("Enter the numbers from 1 to 16 in any order: ");

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &square[i][j]);
    }
  }

  printf("\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%2d ", square[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("Row sums: ");
  for (i = 0; i < 4; i++) {
    sum = 0;
    for (j = 0; j < 4; j++) {
      sum += square[i][j];
    }
    printf("%d ", sum);
  }
  printf("\n");

  printf("Column sums: ");
  for (i = 0; i < 4; i++) {
    sum = 0;
    for (j = 0; j < 4; j++) {
      sum += square[j][i];
    }
    printf("%d ", sum);
  }
  printf("\n");

  printf("Diagonal sums: ");
  for (i = 0; i < 2; i++) {
    sum = 0;
    for (j = 0; j < 4; j++) {
      if (i == 0)
        sum += square[j][j];
      else
        sum += square[j][3 - j];
    }
    printf("%d ", sum);
  }
  printf("\n");

  return 0;
}
