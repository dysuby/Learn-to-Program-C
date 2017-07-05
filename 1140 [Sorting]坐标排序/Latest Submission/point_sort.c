#include "point_sort.h"
void point_sort(struct point a[], int n) {
  int index, index2;
  struct point temp;
  for (index = n - 1; index > 0; --index) {
    for (index2 = 0; index2 < index; ++index2) {
      if (a[index2].x > a[index].x) {
        temp.x = a[index].x;
        temp.y = a[index].y;
        a[index].x = a[index2].x;
        a[index].y = a[index2].y;
        a[index2].x = temp.x;
        a[index2].y = temp.y;
      } else if (a[index].x == a[index2].x) {
        if (a[index2].y > a[index].y) {
          temp.x = a[index].x;
          temp.y = a[index].y;
          a[index].x = a[index2].x;
          a[index].y = a[index2].y;
          a[index2].x = temp.x;
          a[index2].y = temp.y;                  
        }
      }
    }  
  }
}