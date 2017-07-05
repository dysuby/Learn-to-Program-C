#include <stdio.h>
int calculate(int month, int rabit, int small2, int small1) {
  if (month == 1) {
    return  rabit + small1 + small2;
  } else {
    calculate(--month, rabit + small2, small1, rabit + small2);
  }
}
int main() {
  int month;
  while (scanf("%d", &month) != EOF && month != -1) {
    printf("%d\n", calculate(month, 0, 0, 2));
  }
  return 0;
}