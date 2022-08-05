#include <stdio.h>

int main(void) {
  float amount_of_loan = 0;
  float interest_rate = 0;
  float monthly_payment = 0;
  char *str_num[3] = {"first", "second", "third"};

  printf("Enter amount of loan: ");
  scanf("%f", &amount_of_loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  interest_rate = interest_rate / 12.0f / 100.0f;

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  for (int i = 0; i < 3; i++) {
    amount_of_loan =
        amount_of_loan + amount_of_loan * interest_rate - monthly_payment;
    printf("Balance remaining after %s payment: $%.2f\n", str_num[i],
           amount_of_loan);
  }
  return 0;
}
