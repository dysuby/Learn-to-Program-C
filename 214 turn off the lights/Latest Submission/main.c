#include <stdio.h>
int main() {
  int lights, start, disance, closed, time, index;
  scanf("%d%d%d", &lights, &start, &disance);
  int is_close[lights];
  for (index = 0; index < lights; ++index) {
    is_close[index] = 0;
  }
  for (closed = 0; closed != lights; ) {
    printf("%d ", start);
    is_close[start] = 1;
    ++closed;
    for (time = 0; time < disance && closed != lights; ) {
      ++start;
      if (start >= lights) 
        start -= lights;
      if (is_close[start] == 0)
        ++time;
    }
  }
  printf("\n");
  return 0;
}