#include <stdio.h>

int main(void) {
  int item_number = 0;
  float unit_price = 0;
  int day = 1;
  int month = 1;
  int year = 1;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item           ");
  printf("Unit           ");
  printf("Purchase       ");
  printf("\n");
  printf("               ");
  printf("Price          ");
  printf("Date           ");
  printf("\n");
  printf("%-15d", item_number);
  printf("$  %-12.2f", unit_price);
  printf("%02d/%02d/%-11d", month, day, year);
  printf("\n");

  return 0;
}
