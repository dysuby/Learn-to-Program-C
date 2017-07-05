#include <stdio.h>
int main() {
  char ch, prev = ' ';
  int index, amount[27], max = 0;
  for (index = 0; index <= 26; ++index) {
    amount[index] = 0;
  } //initialization
  while (scanf("%c", &ch) == 1) {
    if (ch != ' ' && ch != '\n' && (prev == ' ' || prev == '\n'))
      ++amount[26];
    if (ch != ' ' && ch != '\n') {
      ++amount[ch - 97];
      prev = ch;
    } else {
      prev = ch;
    }
  }//compute amounts
  for (index = 0; index <= 26; ++index) {
    max = (max >= amount[index]) ? max : amount[index];
  } //find the max
  for ( ; max > 0; --max) {
    printf("%d\t", max); //y-coordinate
    for (index = 0; index <= 26; ++index) {
      if (amount[index] == 0) {
        continue;
      } else if (amount[index] >= max) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  printf(" \t");
  for (index = 0; index <= 26; ++index) {
    if (amount[index] != 0 && index != 26) 
      printf("%c", index + 97);
    else if (index == 26 && amount[26] != 0)
      printf("W\n");
  } // final
  return 0;
}