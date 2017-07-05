#include <stdio.h>
int main() {
  int len, index, remove, left = 0;
  scanf("%d", &len);
  int num[len];
  for (index = 0; index < len; ++index)
    scanf("%d", &num[index]);
  scanf("%d", &remove);
  for (index = 0; index < len; ++index) {
    if (num[index] != remove)
      ++left;
  }
  printf("%d\n", left);
  return 0;
}