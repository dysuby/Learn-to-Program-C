#include <stdio.h>

int main() {
  int year = 0;
  scanf("%d", &year);
  if ((0 == year % 400) || (0 != year % 100 && 0 == year % 4)) {
    printf("%d is a leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}