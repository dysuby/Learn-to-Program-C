#include <stdio.h>
int main() {
	int test_case, test_time, digit, sum[10];
  int n, m, ch = 0;
  scanf("%d", &test_case);
  for (test_time = 0; test_time < test_case; ++test_time) {
    for (m = 0; m <= 9; ++m)
      sum[m] = 0;
    scanf ("%d", &digit);
    for (n = 1; n <= digit; ++n) {
      if (n < 10) {
        ++sum[n];
      } else if (n < 100) {
          ch = n / 10;
          ++sum[ch];
          ch = n - ch * 10;
          ++sum[ch];
      } else if (n < 1000) {
          ch = n / 100;
          ++sum[ch];
          ch = (n - ch * 100) / 10;
          ++sum[ch];
          ch = (n - n / 10 * 10);
          ++sum[ch];
      } else {
         sum[0] += 3;
         ++sum[1];  
      }
    }
 	for (n = 0; n <= 9; ++n) {
      if (n < 9) 
        printf("%d ", sum[n]);
      else
        printf("%d\n", sum[n]);
    }
  }
  return 0;
}