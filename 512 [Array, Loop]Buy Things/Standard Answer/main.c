#include <stdio.h>

int main() {
  int arr[10] = {0};
  int money = 0, n = 0, temp = 0;

  scanf("%d%d", &money, &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &temp);
    arr[i] = temp;
  }

  int cirno_say = 0;
  while (scanf("%d", &cirno_say), cirno_say != -1) {
    if (cirno_say > 9) {
      printf("Ihen!\n");
      break;
    }
    if (money < arr[cirno_say] || cirno_say >= n) {
      printf("BAKA!\n");
      break;
    }
    money -= arr[cirno_say];

    printf("You have %d yen now.\n", money);
  }
  printf("Bye.\n");
  return 0;
}
