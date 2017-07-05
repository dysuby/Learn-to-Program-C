#include <stdio.h>
int main() {
	int test_time, group_large;
	int index = 0, num, ch;
	int max, secoond_max, middle;
  scanf("%d", &test_time);
  int result[test_time];
  while (index < test_time) {
  	num = 0;
    max = 0;
    secoond_max = 0;
    for(scanf("%d", &group_large); num < group_large; ++num) {
      scanf("%d", &ch);
      if (ch >= max) {
        secoond_max = max;
        max = ch;
      } else if (ch >= secoond_max) {
          secoond_max = ch;
      }
    }
    result[index] = secoond_max;
  	++index;
  }
  for (index = 0; index < test_time; ++index) {
    printf("%d\n",result[index]);
  }
  return 0;
}