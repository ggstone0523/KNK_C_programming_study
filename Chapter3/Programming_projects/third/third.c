#include <stdio.h>

int main(void) {
  int gs1Prefix = 0;
  int groupId = 0;
  int pubCode = 0;
  int itemNum = 0;
  int checkDigit = 0;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupId, &pubCode, &itemNum,
        &checkDigit);

  printf("GS1 prefix: %d\n", gs1Prefix);
  printf("Group identifier: %d\n", groupId);
  printf("Publisher code: %d\n", pubCode);
  printf("Item number: %d\n", itemNum);
  printf("Check digit: %d\n", checkDigit);

  return 0;
}
