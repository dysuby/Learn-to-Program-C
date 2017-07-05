#include <stdio.h>
#include <math.h>
int main() {
  int m, sum = 0, i;
  scanf("%d", &m);
  int dig[m];
  double result, aver, square = 0;
  for (i = 0; i < m; ++i) {
    scanf("%d", &dig[i]);
    sum += dig[i];
  }
  aver = (double)sum / m;
  for (i = 0; i < m; ++i) {
    square += (dig[i] - aver) * (dig[i] - aver);
  }
  result = sqrt(square / m);
  printf("%.4lf\n", result);
  return 0;
}