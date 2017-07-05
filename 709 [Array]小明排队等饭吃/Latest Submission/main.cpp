#include <stdio.h>
int main() {
  int good, goodtime, bad, badtime, badpo, sum = 0;
  int i, j;
  scanf("%d", &good);
  for (i = 1; i <= good; ++i) {
    scanf("%d", &goodtime);
    sum += goodtime;
  }
  scanf("%d", &bad);
  for (j = 1; j <= bad; ++j) {
    scanf("%d%d", &badpo, &badtime);
    if (badpo <= good)
      sum += badtime;
  }
  printf("%d\n", sum);
  return 0;
}