#include <stdio.h>

// the array for calculate triangle
int matrix[31][31] = {0};

int main() {
  int size = 0;

  // read from sdtin
  scanf("%d", &size);
  if (size < 0 || size > 30) return 0;

  for (int row = 0; row < size; ++row) {
    // if col = 0 or col = row
    matrix[row][0] = matrix[row][row] = 1;

    // size - row space(s) at the begin of line
    for (int i = 0; i < size - row - 1; ++i) {
      putchar(' ');
    }
    putchar('1');
    for (int col = 1; col < row; ++col) {

      // N(R, C) = N(R - 1, C) + N(R - 1, C - 1)
      matrix[row][col] = matrix[row - 1][col] + matrix[row - 1][col - 1];
      printf(" %d", matrix[row][col]);
    }

    // the first line has only one number
    if (row) printf(" 1");
    putchar('\n');
  }
  return 0;
}
