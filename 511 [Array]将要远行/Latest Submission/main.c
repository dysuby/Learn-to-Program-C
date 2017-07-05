#include <stdio.h>
#include <ctype.h>
int main() {
  int ch,sum = 0;
  while ((ch = getchar())) {
    if (isdigit(ch))
      sum += (ch - 48);
    else if (sum != 0)
      break;
  }
  if (sum % 3 == 0)
    printf("God\n");
  else
    printf("Issac\n");
  return 0;
}