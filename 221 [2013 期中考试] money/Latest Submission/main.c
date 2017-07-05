#include <stdio.h>
int main() {
  int test_times, times = 0;
  int kinds, money, price, num;
  int counter = 0;
  scanf("%d", &test_times);
  while (times < test_times) {
    scanf("%d%d", &money, &kinds);
    while (counter < kinds) {
      scanf("%d%d", &price, &num);
      money -= (price * num);
      ++counter;
    }
    if (money >= 0)
      printf("%d\n", money);
    else
      printf("Not enough\n");
    ++times;
    counter = 0;
  }
  return 0;
}