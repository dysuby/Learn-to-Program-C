#include <stdio.h>
int main() {
  char character, cha[100] = {'\0'}, index, len = 0;
  while ((character = getchar()) != '\n') {
    for (index = 0; cha[index] != '\0'; ++index) {
      if (character == cha[index])
        break;
    }
    if (cha[index] == '\0') {
      cha[len] = character;
      cha[++len] = '\0';
    }
  }
  printf("%s\n", cha);
  return 0;
} 