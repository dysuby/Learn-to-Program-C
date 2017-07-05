#include <stdio.h>
#include <string.h>
int main() {
  int test, base, i, j, result1, result2;
  char dig[9];
  scanf("%d%d", &test, &base);
  for(i = 0; i < test; ++i) {
    scanf("%s", dig);
    result1 = 0;
    for (j = 0; j < strlen(dig); ++j) {
      result1 = result1 * base + dig[j] - '0';
    }
    result2 = 0;
    for (--j; j >= 0; --j) {
      result2 = result2 * base + dig[j] - '0'; 
    }
    printf("%d %d\n", result1, result2);
  }
  return 0;
}