#include <stdio.h>
void output(int digit[], int max) {
  int index;
  for (index = 0; index < max - 1; ++index) {
    printf("%d ", digit[index]);
  }
  printf("%d\n", digit[index]);
}
int give(int digit[], int endindex, int dig, int max) {
  int index;
  for (index = 0; index < endindex; ++index) {
    if (digit[index] == dig) {
      return 0;
    }
  }
  return dig;
}
void Permutation(int digit[], int max, int startindex) {
  int dig, temp = 0;
    for (dig = 1; dig <= max; ++dig) {
      temp = give(digit, startindex, dig, max);
      if (temp != 0)
        digit[startindex] = temp;
      else
        continue;
      if (startindex < max - 1)
        Permutation(digit, max, startindex + 1);
      else
        output(digit, max);
    }
}
int main() {
  int max, index, startindex = 0;
  scanf("%d", &max);
  int digit[max];
  for (index = 0; index < max; ++index) {
    digit[index] = 0;
  }
  Permutation(digit, max, startindex);
  return 0;
}