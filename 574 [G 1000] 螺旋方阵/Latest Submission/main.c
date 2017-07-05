#include <stdio.h>
int main() {
  int n, index = 0, i = 0, j = 0, sum = 1;
  scanf("%d", &n);
  int round[n][n];
  j = n;
  while (sum <= n * n) {
    for ( ; index < j && sum <= n * n; ++index) {
      round[i][index] = sum;
      ++sum;
    }
    --index;
    for (++i; i < j && sum <= n * n; ++i) {
      round[i][index] = sum;
      ++sum;
    }
    --i;
    for (--index; index >= n - j && sum <= n * n; --index) {
      round[i][index] = sum;
      ++sum;
    }
    --j; 
    ++index;
    for (--i; i >= n - j && sum <= n * n; --i) {
      round[i][index] = sum;
      ++sum;
    }
    ++i;
    ++index;
  }
  for (i = 0; i < n; ++i) {
    for (index = 0; index < n; ++index) {
      if (index != n - 1) 
        printf("%d ", round[i][index]);
      else
        printf("%d\n", round[i][index]);
    }
  }
  return 0;
}