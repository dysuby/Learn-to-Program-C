#include <stdio.h>
int main() {
  int money, items, cirno_say, i = 0;
  scanf("%d%d", &money, &items);
  int price[items];
  while (i < items) {
    scanf("%d", &price[i]);
    ++i;
  }
  for (scanf("%d", &cirno_say);cirno_say >= 0 &&
       cirno_say <= 9;scanf("%d", &cirno_say)) {
    if (money > price[cirno_say]){
      money -= price[cirno_say];
      printf("You have %d yen now.\n", money);
    }
    else {
      printf("BAKA!\nBye.\n");
      break;
    }
  }
  if (cirno_say == -1) {
    printf("Bye.\n");
  } else if (cirno_say == 10) {
    printf("Ihen!\nBye.\n");
  }
  return 0;
}