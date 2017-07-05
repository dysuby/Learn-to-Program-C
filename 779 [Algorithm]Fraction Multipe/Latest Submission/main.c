#include <stdio.h>
int main() {
  int a_numerator, a_denominator, b_numerator, b_denominator;
  int numerator, denominaror;
  int counter, index, num, max, min;
  scanf("%d", &index);
  for (num = 0; num < index; ++num) {
    scanf("%d%d%d%d", &a_numerator, &a_denominator, &b_numerator, &b_denominator);
    numerator = a_numerator * b_numerator;
    denominaror = a_denominator * b_denominator;
    if (denominaror == 0) {
        printf("Not A Number\n");
    } else if (numerator == 0) {
        printf("0\n");
    } else {
        min = numerator > denominaror ? denominaror : numerator;
        max = numerator > denominaror ? numerator : denominaror;
        for (counter = min; ; --counter) {
          if (numerator % counter == 0 && denominaror % counter == 0) {
            if (denominaror / counter == 1) 
              printf("%d\n", numerator / counter);
            else
              printf("%d/%d\n", numerator / counter, denominaror / counter);
            break;
          }
        }
      }
    }
  return 0;
}