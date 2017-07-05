#include <stdio.h>
int main() {
  int max_x, max_y, sx, sy, tx, ty, times;
  int counter, highest = 0, x_index, y_index;
  scanf("%d%d%d", &max_x, &max_y, &times);
  int matrix[500][500] = {0};
  for (counter = 0; counter < times; ++counter) {
    scanf("%d%d%d%d", &sx, &sy, &tx, &ty);
    for (y_index = sy; y_index <= ty; ++y_index) {
      for (x_index = sx; x_index <= tx; ++x_index) {
        ++matrix[y_index][x_index];
      }
    }
  }
  for (y_index = 0; y_index <= max_y; ++y_index) {
    for (x_index = 0; x_index <= max_x; ++x_index) {
      highest = (highest >= matrix[y_index][x_index]) ? highest : matrix[y_index][x_index];
    }
  }
  printf("%d\n", highest);
  return 0;
}