#include <stdio.h>
int main() {
  int row_num, row, space, column, result, icol, irow, half;
  long long int mrow, mcol;
  scanf("%d", &row_num);
  for (row = 0; row <= row_num - 1; ++row) { //row
    space = 1;
    column = 0;
    while (space <= (row_num - row - 1)) {
      putchar(' ');
      ++space; // space
    }
    while (column <= row) { //every row's num
      if (column == row) {
        printf("1\n"); //last one
        break;
      } else if (column == 0) {
        printf("1 "); //first one
      } else { 
          if (column > row / 2)
            half = row - column; 
          else 
            half = column;
          mrow = 1;
          for (irow = row; irow > row - half; --irow) { //!
            mrow *= irow;
          }
          mcol = 1;
          for (icol = half; icol > 0; --icol) {
            mcol *= icol;
          }
          result = mrow / mcol;
          printf("%d ", result);
        }
      ++column; //update
    } 
  }
  return 0;
}
