#include <stdio.h>
int main() {
  int case_num, digit[10], input, divisor, result, store;
  int counter, index;
  char dig;
  scanf("%d", &case_num);
  getchar();
  for (counter = 0; counter < case_num; ++counter) {
    index = 0;
    while ((dig = getchar()) != ' ') {
      digit[index] = dig - 48;
      ++index;
    }
    scanf("%d", &divisor);
    store = index - 1;
    for (--index; index >= 0; --index) {
      printf("%d", digit[index]);
    }
    for (input = 0; store >= 0; --store) {
      input = input * 10 + digit[store];
    }
    result = input % divisor;
    printf(" %d\n", result);
    getchar();
  }
  return 0;
}