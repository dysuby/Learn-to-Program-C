#include <stdio.h>
#include <math.h>
int main()  {
  int digit_num, num, i = 0, j, each[8], ch, a;
  scanf("%d", &digit_num);
  getchar();
  for (j = 0; j < digit_num; ++j) {
      i = 0;
      while ((ch = getchar()) != '\n' && ch != ' ' && ch != EOF) {
        each[i] = ch;
        ++i;
      } 
      if (i > 1) {
        i--;
        for (a = 0; a <= i ; ++a, --i) {
          if (each[a] != each[i]) {
            printf("No\n");
            break;
          } 
          if (i - a == 1 || i == a) {
          printf("Yes\n");
          }
        }
      } else {
        printf("Yes\n");
        }
  }
  return 0;
}  