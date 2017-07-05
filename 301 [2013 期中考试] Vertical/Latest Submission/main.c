#include <stdio.h>
int main() {
  int a1, a2, a3, b1, b2, b3;
  scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3);
  if (a1 * b1 + a2 * b2 + a3 * b3== 0)
    printf("Oh yes!\n");
  else
    printf("Xite!\n");
   return 0;
 }