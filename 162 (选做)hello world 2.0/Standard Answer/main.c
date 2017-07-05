#include <stdio.h>

int main() {

  printf("Hello ");

  char x;

  while(scanf("%c", &x) != EOF && x != '\n') {
    putchar(x);
  }

  printf("!\n");

  return 0;
}
