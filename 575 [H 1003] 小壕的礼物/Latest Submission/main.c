#include <stdio.h>
int main() {
  int cases, counter, i = 0, index, j = 0, m = 0;
  scanf("%d", &cases);
  int rorg[cases];
  char name[cases][30], top[cases][30];
  for (counter = 0; counter < cases; ++counter) {
    scanf("%d", &rorg[i]);
    if (rorg[i] == 1) {
      scanf("%s", &top[j]);
      ++j;
    } else if(rorg[i] == 2) {
      scanf("%s", &name[m]);
      printf("%s ", name[m]);
      printf("%s\n", top[j - 1]);
      --j;
    }
  }
  return 0;
}