#include <stdio.h>
int main() {
  int lmax, n, left = 0, area, start, end, i;
  scanf("%d%d", &lmax, &area);
  int length[lmax + 1];
  for (n = 0; n <= lmax; ++n) {
    length[n] = n;
  }
  for (i = 0; i < area; ++i) {
    scanf("%d%d", &start, &end);
    for (n = start; n <= end; ++n)
      length[n] = -1;
  }
  for (n = 0; n <= lmax; ++n) {
    if (length[n] >= 0)
      ++left;
  }
  printf("%d\n", left);
  return 0;
}