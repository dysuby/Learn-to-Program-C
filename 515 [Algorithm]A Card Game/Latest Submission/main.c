#include <stdio.h>
int main() {
  int num, index, sum = 0, counter, ch;
  scanf("%d", &num);
  int digit[5] = {0, 0, 0, 0, 0};
  for (index = 0; index < num; ++index) {
    scanf("%d", &ch);
    switch (ch) {
      case 0:
        ++digit[0];
        break;
      case 3:
        ++digit[1];
        sum += 3;
        break;
      case 5:
        ++digit[2];
        sum += 5;
        break;
      case 7:
        ++digit[3];
        sum += 7;
        break;
      case 9:      
        ++digit[4];
        sum += 9;
        break;
    }
  }
  if (sum % 3 == 0 && sum && digit[0]) {
    for ( ; digit[4] > 0; --digit[4]) {
      printf("9");
    }
    for ( ; digit[3] > 0; --digit[3]) {
      printf("7");
    }
    for ( ; digit[2] > 0; --digit[2]) {
      printf("5");
    }
    for ( ; digit[1] > 0; --digit[1]) {
      printf("3");
    }
    for ( ; digit[0] > 0; --digit[0]) {
      printf("0");
    }
  } else {
    printf("no such number");
  }
    printf("\n");
    return 0;
}