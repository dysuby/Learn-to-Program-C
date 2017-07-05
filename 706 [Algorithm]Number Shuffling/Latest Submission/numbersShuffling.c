#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  unsigned int seed;
  int n, i, j, m, middle;
  scanf("%d", &n);
  int num[1][n];
  for (i = 0; i < n; ++i) {
    scanf("%d", &num[0][i]);
  }
  memcpy(num[1], num[0], 4 * n);
  scanf("%d", &seed);
  srand(seed);
  for (j = 0; j <= 1; ++j) {
    for (m = 1; m < n; ++m) {
      i = rand();
      i %= (n - m + 1);
      middle = num[j][i];
      num[j][i] = num[j][n - m];
      num[j][n - m] = middle;
    }
  }
  printf("{%d", num[0][0]);
  for (i = 1; i < n; ++i) {
    printf(", %d", num[0][i]);
  }
  printf("}\n");
  printf("{%d", num[1][0]);
  for (i = 1; i < n; ++i) {
    printf(", %d", num[1][i]);
  }
  printf("}\n");
  return 0;
}